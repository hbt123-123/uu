// rea decompile_all
// name: FUN_100561d78
// address: 0x100561d78
// body: available
// range: 0x100561d78-0x100561e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100561d78(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  byte *unaff_x22;
  long unaff_x23;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  pbVar3 = (byte *)(lVar4 + 1);
  *(byte **)(unaff_x20 + 0x28) = pbVar3;
  if ((pbVar3 != pbVar1) && (0xffffffe5 < (*pbVar3 & 0xffffffdf) - 0x5b)) {
    for (pbVar6 = (byte *)(lVar4 + 2); *(byte **)(unaff_x20 + 0x28) = pbVar6, pbVar6 != pbVar1;
        pbVar6 = pbVar6 + 1) {
      bVar2 = *pbVar6;
      if (((bVar2 - 0x3a < 0xfffffff6 && (bVar2 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
          (uVar5 = (uint)bVar2, 1 < uVar5 - 0x2e)) && (uVar5 != 0x5f)) {
        if (uVar5 != 0x5d) goto LAB_100561e3c;
        break;
      }
    }
    if ((pbVar6 != pbVar1) && (*pbVar6 == 0x5d)) {
      lVar4 = (long)pbVar6 - (long)pbVar3;
      FUN_10054c680();
      if (lVar4 != 0) {
        *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
        FUN_100560bb8();
        unaff_x22 = pbVar3;
        unaff_x23 = lVar4;
        goto LAB_100561e68;
      }
    }
  }
LAB_100561e3c:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,pbVar3,0,0);
  *pbVar3 = 0;
  _swift_willThrow();
LAB_100561e68:
  auVar7._8_8_ = unaff_x23;
  auVar7._0_8_ = unaff_x22;
  return auVar7;
}

