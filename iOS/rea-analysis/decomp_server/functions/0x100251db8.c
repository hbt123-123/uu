// rea decompile_all
// name: FUN_100251db8
// address: 0x100251db8
// body: available
// range: 0x100251db8-0x100251edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100251db8(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0xffffff98;
  }
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = _malloc(0x1010);
    if (puVar7 == (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0xffffff98;
    }
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[1] = 0xff0;
    *param_1 = puVar7;
    param_1[1] = puVar7;
  }
  if (param_3 != 0) {
    uVar2 = puVar7[1];
    do {
      if (uVar2 == 0) {
        puVar1 = _malloc(0x1010);
        if (puVar1 == (undefined8 *)0x0) {
          *puVar7 = 0;
          return 0xffffff98;
        }
        lVar5 = 0;
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[1] = 0xff0;
        *puVar7 = puVar1;
        uVar2 = 0xff0;
        param_1[1] = puVar1;
      }
      else {
        lVar5 = puVar7[2];
        puVar1 = puVar7;
      }
      uVar4 = uVar2;
      if (param_3 <= uVar2) {
        uVar4 = param_3;
      }
      uVar4 = uVar4 & 0xffffffff;
      if (uVar4 != 0) {
        puVar3 = (undefined1 *)((long)puVar1 + lVar5 + 0x20);
        uVar2 = uVar4;
        puVar6 = param_2;
        do {
          *puVar3 = *puVar6;
          uVar2 = uVar2 - 1;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar2 != 0);
        uVar2 = puVar1[1];
        lVar5 = puVar1[2];
      }
      uVar2 = uVar2 - uVar4;
      puVar1[1] = uVar2;
      puVar1[2] = lVar5 + uVar4;
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
      puVar7 = puVar1;
    } while (param_3 != 0);
  }
  return 0;
}

