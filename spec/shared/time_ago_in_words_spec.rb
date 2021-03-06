describe 'TimeAgoInWords' do
  before do
    @sample_time = Time.now - 91150
    @sample_words = "1 day and 1 hour ago"
  end

  describe '#ago_in_words' do

    it "should translate to words" do
      @sample_time.ago_in_words.should == @sample_words
    end
  end
end
