// rea decompile_all
// name: FUN_1001fe560
// address: 0x1001fe560
// body: available
// range: 0x1001fe560-0x1001fe717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fe560(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_70,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      _swift_release(param_2);
    }
    else {
      _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
      lVar1 = param_2 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if ((lVar1 != 0) && (lVar1 == param_3)) {
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        lVar1 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                         _TtC14UURemoteServer15StreamerManager::dispatcher);
        if (((lVar1 != 0) &&
            (lVar1 = *(long *)(lVar1 + _TtC14UURemoteServer18StreamerDispatcher::
                                       currentConnectSession), lVar1 != 0)) && (param_3 == lVar1)) {
          FUN_100201820(param_4,param_5,param_1);
          _swift_release(param_2);
          return;
        }
      }
      _swift_release(param_2);
    }
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001fe718,0,0xd0000000000000a0,0x800000010088d990,0xd00000000000002d,
                0x80000001008a2890,0x135,0);
  return;
}

