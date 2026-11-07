// rea decompile_all
// name: FUN_10037a31c
// address: 0x10037a31c
// body: available
// range: 0x10037a31c-0x10037a403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037a31c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uStack_41;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)*param_1;
  lVar5 = param_1[1];
  if (1 < lVar5 - (long)puVar1 >> 4) {
    uVar4 = *puVar1;
    local_38 = puVar1[1];
    *puVar1 = 0;
    puVar2 = puVar1;
    local_40 = uVar4;
    FUN_10037b960(puVar1,&uStack_41);
    uVar3 = *puVar2;
    if ((undefined8 *)(lVar5 + -0x10) == puVar2) {
      *puVar2 = uVar4;
      uVar4 = puVar2[1];
      puVar2[1] = local_38;
      local_40 = uVar3;
      local_38 = uVar4;
    }
    else {
      *puVar2 = *(undefined8 *)(lVar5 + -0x10);
      *(undefined8 *)(lVar5 + -0x10) = uVar3;
      uVar4 = puVar2[1];
      puVar2[1] = *(undefined8 *)(lVar5 + -8);
      uVar3 = *(undefined8 *)(lVar5 + -0x10);
      *(undefined8 *)(lVar5 + -0x10) = local_40;
      *(undefined8 *)(lVar5 + -8) = local_38;
      local_40 = uVar3;
      local_38 = uVar4;
      FUN_10037b9e0(puVar1,puVar2 + 2,&uStack_41,(long)(puVar2 + 2) - (long)puVar1 >> 4);
    }
    FUN_10037b708(&local_40);
    lVar5 = param_1[1];
  }
  lVar5 = lVar5 + -0x10;
  FUN_10037b708();
  param_1[1] = lVar5;
  return;
}

