// rea decompile_all
// name: FUN_1005191f0
// address: 0x1005191f0
// body: available
// range: 0x1005191f0-0x10051933b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005191f0(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (DAT_100aa26a0 != -1) {
    _swift_once(&DAT_100aa26a0,FUN_100518d64);
  }
  lVar7 = DAT_100aab060;
  _swift_beginAccess(DAT_100aab060 + 0x10,auStack_68,0x20,0);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    lVar2 = param_1;
    uVar4 = param_2;
    FUN_1001a2c70();
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar2 * 0x10);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar6);
      bVar1 = lVar7 == param_4;
      goto LAB_100519304;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_endAccess(auStack_68);
  _swift_beginAccess(lVar7 + 0x10,auStack_68,0x21,0);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lVar7 + 0x10) = 0x8000000000000000;
  FUN_100521584(param_4,param_5,param_1,param_2,uVar3);
  *(undefined8 *)(lVar7 + 0x10) = uVar5;
  _swift_endAccess(auStack_68);
  bVar1 = true;
LAB_100519304:
  *(bool *)param_3 = bVar1;
  return;
}

