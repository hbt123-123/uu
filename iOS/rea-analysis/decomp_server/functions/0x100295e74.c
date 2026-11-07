// rea decompile_all
// name: FUN_100295e74
// address: 0x100295e74
// body: available
// range: 0x100295e74-0x100295f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100295e74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = 0xff;
  __ss6ResultOMa(0xff,lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar8 = *(long *)(lVar3 + -8);
  puVar7 = &stack0xffffffffffffffb0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100295d4c(puVar7,param_2);
  lVar6 = *(long *)(lVar2 + -8);
  puVar4 = puVar7;
  (**(code **)(lVar6 + 0x30))(puVar7,1,lVar2);
  if (((int)puVar4 == 1) ||
     (puVar4 = puVar7, _swift_getEnumCaseMultiPayload(puVar7,lVar2), lVar8 = lVar6, lVar3 = lVar2,
     (int)puVar4 == 1)) {
    (**(code **)(lVar8 + 8))(puVar7,lVar3);
    lVar8 = *(long *)(lVar1 + -8);
    uVar5 = 1;
  }
  else {
    lVar8 = *(long *)(lVar1 + -8);
    (**(code **)(lVar8 + 0x20))(param_1,puVar7,lVar1);
    uVar5 = 0;
  }
  (**(code **)(lVar8 + 0x38))(param_1,uVar5,1,lVar1);
  return;
}

