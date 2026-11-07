// rea decompile_all
// name: FUN_100124d7c
// address: 0x100124d7c
// body: available
// range: 0x100124d7c-0x100124f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100124d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  int local_c0;
  undefined1 auStack_b0 [16];
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100401b14(0);
  iVar1 = (int)param_1;
  local_a0 = iVar1;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_7;
  FUN_1003fb48c(FUN_100126000,auStack_b0,0xd000000000000098,0x800000010088de90,&DAT_d000000000000030
                ,0x800000010088ba00,0x5a,0);
  if ((*(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) != 0)
     && (*(int *)(*(long *)(unaff_x20 +
                           _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) +
                 _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar1)) {
    FUN_1000c9fe0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_c0 = iVar1;
    FUN_1003fb48c(FUN_100126014,auStack_d0,0xd00000000000009c,0x8000000100885110,0xd000000000000014,
                  0x800000010088df80,0x74,0);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar2 = *(undefined8 *)(DAT_100b360a8 + 0x80);
    _swift_retain(uVar2);
    FUN_1000162bc(param_1,4);
    _swift_release(uVar2);
  }
  return;
}

