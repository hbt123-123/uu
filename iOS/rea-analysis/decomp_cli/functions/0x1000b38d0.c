// rea decompile_all
// name: FUN_1000b38d0
// address: 0x1000b38d0
// body: available
// range: 0x1000b38d0-0x1000b399b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b38d0(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x21;
  uint uVar6;
  undefined1 *puVar7;
  
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    puVar7 = (undefined1 *)(param_3 + 0x30);
    do {
      lVar5 = lVar5 + -1;
      uVar1 = *(undefined8 *)(puVar7 + -0x10);
      uVar2 = *(undefined8 *)(puVar7 + -8);
      uVar3 = *puVar7;
      FUN_100065610(uVar1,uVar2,uVar3);
      uVar4 = 0;
      (*param_1)();
      uVar6 = (uint)uVar4;
      FUN_100065628(uVar1,uVar2,uVar3);
      if (unaff_x21 != 0) break;
      puVar7 = puVar7 + 0x18;
    } while ((uVar4 & 1) == 0 && lVar5 != 0);
  }
  return uVar6 & 1;
}

