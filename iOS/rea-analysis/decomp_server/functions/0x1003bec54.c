// rea decompile_all
// name: FUN_1003bec54
// address: 0x1003bec54
// body: available
// range: 0x1003bec54-0x1003bed87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003becbc to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003bec54(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  void *aBlock;
  long unaff_x20;
  ID self;
  undefined8 uVar3;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  FUN_1003bee60();
  self = *(ID *)(unaff_x20 + 0x70);
  _objc_msgSend(self,"lock");
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = param_1;
  FUN_1000e408c(param_1,uVar3);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend(self,"unlock");
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  *(ulong *)(unaff_x20 + 0x68) = param_1;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRelease(uVar3);
  _objc_msgSend(self,"unlock");
  puVar2 = &DAT_1009b93b0;
  _swift_allocObject(&DAT_1009b93b0,0x18,7);
  *(ulong *)(puVar2 + 0x10) = param_1;
  local_40 = FUN_1003c1828;
  local_60 = PTR___NSConcreteStackBlock_100995490;
  local_58 = 0x42000000;
  local_50 = thunk_FUN_1000a8c3c;
  puStack_48 = &DAT_1009b93c8;
  local_38 = puVar2;
  aBlock = __Block_copy(&local_60);
  _swift_release(local_38);
  SentrySDK::configureScope_((ID)&objc::class_t::SentrySDK,"configureScope:",(ID)aBlock,param_4);
  __Block_release(aBlock);
  return;
}

