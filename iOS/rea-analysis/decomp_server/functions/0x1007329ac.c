// rea decompile_all
// name: SAGzipUtility::gzipData:
// address: 0x1007329ac
// body: available
// range: 0x1007329ac-0x100732caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100732bc4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAGzipUtility::gzipData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  z_stream local_a0;
  
  if ((param_3 != 0) && (IVar2 = objc_stub::length(param_3), IVar2 != 0)) {
    IVar2 = param_3;
    _objc_retainAutorelease();
    IVar2 = objc_stub::bytes(IVar2);
    if (IVar2 != 0) {
      local_a0.total_out = 0;
      local_a0.zalloc = (alloc_func)0x0;
      local_a0.zfree = (free_func)0x0;
      local_a0.opaque = (voidpf)0x0;
      IVar2 = param_3;
      _objc_retainAutorelease();
      local_a0.next_in = (Bytef *)objc_stub::bytes(IVar2);
      IVar2 = objc_stub::length(param_3);
      local_a0.avail_in = (uInt)IVar2;
      iVar1 = _deflateInit2_(&local_a0,-1,8,0x1f,8,0,"1.2.12",0x70);
      if (((-3 < iVar1) && (iVar1 != -2)) && (iVar1 == 0)) {
        IVar2 = objc_stub::length(param_3);
        IVar2 = NSMutableData::dataWithLength_
                          ((ID)&_OBJC_CLASS___NSMutableData,(long)((float)IVar2 * 1.1 + 12.0));
        do {
          IVar3 = IVar2;
          _objc_retainAutorelease();
          IVar3 = objc_stub::mutableBytes(IVar3);
          local_a0.next_out = (Bytef *)(IVar3 + local_a0.total_out);
          IVar3 = NSMutableData::length(IVar2);
          local_a0.avail_out = (int)IVar3 - (int)local_a0.total_out;
          iVar1 = _deflate(&local_a0,4);
        } while (iVar1 == 0);
        if (iVar1 < -3) {
          if (iVar1 == -6) {
            pcVar5 = &cf_Theversionofzlib_handtheversionofthelibrarylinkeddonotmatch_;
            goto LAB_100732c58;
          }
          if (iVar1 == -5) {
            pcVar5 = &cf_Ranoutofoutputbufferforwritingcompressedbytes_;
            goto LAB_100732c58;
          }
          if (iVar1 == -4) {
            pcVar5 = &cf_Memorycouldnotbeallocatedforprocessing_;
            goto LAB_100732c58;
          }
        }
        else if (iVar1 < -1) {
          if (iVar1 == -3) {
            pcVar5 = &cf_Thedeflatedatawasinvalidorincomplete_;
            goto LAB_100732c58;
          }
          if (iVar1 == -2) {
            pcVar5 = &cf_Thestreamstatewasinconsistent_e_g__next_inornext_outwasNULL__;
            goto LAB_100732c58;
          }
        }
        else {
          if (iVar1 == -1) {
            pcVar5 = &cf_Erroroccuredwhilereadingfile_;
            goto LAB_100732c58;
          }
          if (iVar1 == 1) {
            _deflateEnd(&local_a0);
            NSMutableData::setLength_(IVar2,local_a0.total_out);
            return IVar2;
          }
        }
        pcVar5 = &cf_Unknownerrorcode_;
LAB_100732c58:
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAGzipUtility.m"
                   ,"+[SAGzipUtility gzipData:]",0xa5,0,
                   &cf_zliberrorwhileattemptingcompression_____Message___s_,pcVar5,local_a0.msg);
        _deflateEnd(&local_a0);
        return 0;
      }
      pcVar5 = &cf_deflateInit2__Error_____Message___s_;
      uVar4 = 0x6f;
      goto LAB_100732b9c;
    }
  }
  pcVar5 = &cf_Error_Can_tcompressanemptyornullNSDataobject_;
  uVar4 = 0x2c;
LAB_100732b9c:
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,1,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAGzipUtility.m"
             ,"+[SAGzipUtility gzipData:]",uVar4,0,pcVar5);
  return 0;
}

