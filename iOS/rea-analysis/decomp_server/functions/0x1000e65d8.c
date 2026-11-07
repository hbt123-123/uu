// rea decompile_all
// name: FUN_1000e65d8
// address: 0x1000e65d8
// body: available
// range: 0x1000e65d8-0x1000e66f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e65d8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  _swift_beginAccess(param_2 + 0x20,puVar3,0x21,0);
  thunk_FUN_1001a2c34(param_3);
  if (((ulong)puVar3 & 1) == 0) {
    lVar2 = 0;
    FUN_1000e49dc();
    pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
    if ((uVar1 & 1) == 0) {
      FUN_100064b10();
    }
    lVar7 = *(long *)(lVar6 + 0x38);
    lVar2 = 0;
    FUN_1000e49dc();
    lVar8 = *(long *)(lVar2 + -8);
    FUN_1000823d8(lVar7 + *(long *)(lVar8 + 0x48) * param_3,param_1,FUN_1000e49dc);
    FUN_10006c92c(param_3,lVar6);
    *(long *)(param_2 + 0x20) = lVar6;
    pcVar5 = *(code **)(lVar8 + 0x38);
    uVar4 = 0;
  }
  (*pcVar5)(param_1,uVar4,1,lVar2);
  _swift_endAccess(auStack_68);
  return;
}

