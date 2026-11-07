// rea decompile_all
// name: FUN_10010f938
// address: 0x10010f938
// body: available
// range: 0x10010f938-0x10010fb13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010f938(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) goto LAB_10010fa8c;
  _swift_beginAccess(param_1 + 0x10,auStack_70,0,0);
  lVar2 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar1 = DAT_100b360a8;
    lVar3 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar3 == 0) ||
       (lVar3 = *(long *)(lVar3 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
       lVar3 == 0)) {
      _swift_release(param_1);
      goto LAB_10010fa8c;
    }
    if (lVar2 != lVar3) {
      _swift_release(param_1);
      goto LAB_10010fa8c;
    }
    if (((*(byte *)(*(long *)(DAT_100b360a8 + 0x88) + 0x14) & 1) == 0) &&
       (*(int *)(*(long *)(DAT_100b360a8 + 0x88) + 0x10) == param_2)) {
      FUN_10010cdd4(0);
      uVar4 = *(undefined8 *)(lVar1 + 0x80);
      _swift_retain(uVar4);
      FUN_1000162bc(param_3,0);
      _swift_release(param_1);
      _swift_release(uVar4);
      return;
    }
  }
  _swift_release(param_1);
LAB_10010fa8c:
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10010fb14,0,0xd0000000000000ac,0x800000010088b950,&DAT_d000000000000033,
                0x800000010088c0a0,0xfb,0);
  return;
}

