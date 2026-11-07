// rea decompile_all
// name: FUN_1001b0034
// address: 0x1001b0034
// body: available
// range: 0x1001b0034-0x1001b0133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b0034(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    if (lVar2 == 0) {
      FUN_1001b06b8(1);
    }
    else if (lVar2 == 3) {
      FUN_1001aef24();
    }
    else if (lVar2 == 2) {
      lVar2 = *(long *)(param_3 + _TtC14UURemoteServer15StreamerManager::roomConfigFetcher);
      lVar3 = *(long *)(lVar2 + 0x10);
      uVar1 = 0;
      FUN_100401b14(0);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      FUN_1003fb48c(uVar1,thunk_FUN_1001b5520,lVar2,0xd000000000000099,0x800000010089ad60,
                    0x746e497465736572,0xef29286c61767265,0x4b,0);
    }
  }
  return;
}

