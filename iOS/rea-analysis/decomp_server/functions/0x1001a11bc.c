// rea decompile_all
// name: FUN_1001a11bc
// address: 0x1001a11bc
// body: available
// range: 0x1001a11bc-0x1001a132f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001a11bc(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  if (DAT_100a73bd0 != -1) {
    _swift_once(&DAT_100a73bd0,FUN_1001a1198);
  }
  _swift_beginAccess(&DAT_100a7c8e8,auStack_58,0x20,0);
  lVar1 = DAT_100a7c8e8;
  if (*(long *)(DAT_100a7c8e8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_100a7c8e8);
    lVar4 = param_1;
    uVar3 = param_2;
    FUN_1001a2c70();
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(lVar1 + 0x38) + lVar4 * 8);
      _swift_retain(lVar4);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease(lVar1);
      return lVar4;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_endAccess(auStack_58);
  FUN_1001acd28(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(param_2);
  lVar4 = param_1;
  FUN_1001acb18(param_1,param_2);
  _swift_beginAccess(&DAT_100a7c8e8,auStack_58,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(lVar4);
  lVar2 = DAT_100a7c8e8;
  _swift_isUniquelyReferenced_nonNull_native(DAT_100a7c8e8);
  lVar1 = DAT_100a7c8e8;
  DAT_100a7c8e8 = 0x8000000000000000;
  FUN_100060cdc(lVar4,param_1,param_2,lVar2);
  _swift_bridgeObjectRelease(param_2);
  DAT_100a7c8e8 = lVar1;
  _swift_endAccess(auStack_58);
  return lVar4;
}

