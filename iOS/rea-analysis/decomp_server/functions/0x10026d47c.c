// rea decompile_all
// name: FUN_10026d47c
// address: 0x10026d47c
// body: available
// range: 0x10026d47c-0x10026d56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026d47c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  FUN_10026d078(auStack_88);
  lVar2 = 0;
  FUN_10026d8cc();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x14));
  __sSS4hash4intoys6HasherVz_tF(auStack_88,*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x18));
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar4,lVar3);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x1c));
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar4,lVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}

