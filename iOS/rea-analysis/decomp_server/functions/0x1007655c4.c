// rea decompile_all
// name: FUN_1007655c4
// address: 0x1007655c4
// body: available
// range: 0x1007655c4-0x1007656b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007655c4(ID param_1,SEL param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 extraout_var;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  
  bVar4 = FUN_10076bcb8(param_1,param_2);
  puVar5 = (undefined8 *)CONCAT44(extraout_var,bVar4);
  if (((param_1 & 0xf) != 0) && (bVar4 != 0)) {
    if ((DAT_100b2cf28 & 1) == 0) {
      DAT_100b2cf28 = 1;
    }
    param_1 = (ID)((uint)param_1 & 0x80);
  }
  lVar8 = 0;
  uVar7 = 0;
  uVar2 = (uint)param_1;
  if ((param_1 & 0x8c) != 0 && DAT_100b2cf29 != '\0') {
    uVar2 = (uint)param_1 & 3;
  }
  do {
    puVar1 = (uint *)((long)&DAT_1009e90b8 + lVar8);
    uVar3 = *puVar1;
    (**(code **)((long)&PTR_FUN_1009e90c0 + lVar8))();
    if ((puVar5 != (undefined8 *)0x0) && (pcVar6 = (code *)*puVar5, pcVar6 != (code *)0x0)) {
      puVar5 = (undefined8 *)(ulong)((uVar3 & uVar2) != 0);
      (*pcVar6)();
    }
    (**(code **)((long)&PTR_FUN_1009e90c0 + lVar8))();
    if (((puVar5 == (undefined8 *)0x0) || ((code *)puVar5[1] == (code *)0x0)) ||
       ((*(code *)puVar5[1])(), (int)puVar5 == 0)) {
      uVar7 = uVar7 & (*puVar1 ^ 0xffffffff);
    }
    else {
      uVar7 = *puVar1 | uVar7;
    }
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x50);
  DAT_100b2cf2c = uVar7;
  return;
}

