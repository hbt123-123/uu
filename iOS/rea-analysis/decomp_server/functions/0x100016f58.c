// rea decompile_all
// name: FUN_100016f58
// address: 0x100016f58
// body: available
// range: 0x100016f58-0x10001717b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100016f58(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  int iVar2;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  int iStack_8c;
  byte local_88;
  long local_80;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [24];
  
  FUN_1000177d8(param_1,&DAT_d000000000000018,0x800000010087b910);
  _swift_beginAccess(unaff_x20 + 200,auStack_68,0x21,0);
  FUN_1001ddfa4(param_1);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_68,0x21,0);
  FUN_10006daa4(auStack_6c,param_1);
  _swift_endAccess(auStack_68);
  iVar2 = (int)param_2;
  if ((((*(long *)(unaff_x20 + 0x108) == param_3) && ((param_2 >> 0x20 & 1) == 0)) &&
      (lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                        _TtC14UURemoteServer15StreamerManager::dispatcher), lVar1 != 0)) &&
     ((lVar1 = *(long *)(lVar1 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
      lVar1 != 0 &&
      (*(int *)(lVar1 + _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar2)))) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = CONCAT44((int)param_1,iVar2);
    FUN_1003fb48c(FUN_1000400c4,&local_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000049,
                  0x800000010087b930,0x235,0);
    FUN_100017cb4(param_1,param_2,0);
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_88 = (byte)(param_2 >> 0x20) & 1;
    local_90 = (int)param_1;
    iStack_8c = iVar2;
    local_80 = param_3;
    FUN_1003fb48c(FUN_1000400a0,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000049,
                  0x800000010087b930,0x232,0);
  }
  return;
}

