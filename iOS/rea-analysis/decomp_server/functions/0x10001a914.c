// rea decompile_all
// name: FUN_10001a914
// address: 0x10001a914
// body: available
// range: 0x10001a914-0x10001aa0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_10001a914(undefined8 param_1)

{
  class_t *self;
  ID self_00;
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  ID local_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  self = &objc::class_t::StartVideoCaptureConfig;
  _objc_allocWithZone();
  self_00 = _objc_msgSend((ID)self,"init");
  FUN_100039cd0(uVar1,self_00);
  _objc_msgSend(self_00,"setScreenId:",param_1);
  uVar1 = param_1;
  FUN_10001aa0c(param_1);
  _objc_msgSend(self_00,"setVideoTrackIndex:",uVar1);
  FUN_10001ab44(self_00);
  uVar1 = 0;
  FUN_100401b14(0);
  local_50 = (undefined4)param_1;
  local_48 = self_00;
  FUN_1003fb48c(uVar1,FUN_10003ea0c,auStack_60,0xd0000000000000a9,0x8000000100877660,
                0xd00000000000001a,0x8000000100877a20,0x2a8,0);
  return self_00;
}

