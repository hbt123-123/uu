// rea decompile_all
// name: FUN_100561a58
// address: 0x100561a58
// body: available
// range: 0x100561a58-0x100561bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100561a58(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar3 != pbVar1) {
    bVar2 = *pbVar3;
    pbVar6 = pbVar3;
    if (bVar2 == 0x2d) {
      pbVar6 = pbVar3 + 1;
      *(byte **)(unaff_x20 + 0x28) = pbVar6;
      if (pbVar6 != pbVar1) {
        bVar2 = *pbVar6;
        goto LAB_100561a9c;
      }
    }
    else {
LAB_100561a9c:
      uVar7 = (uint)bVar2;
      if (uVar7 == 0x2e) {
        pbVar4 = pbVar6 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar4;
        if ((pbVar4 != pbVar1) && (0xfffffff5 < *pbVar4 - 0x3a)) {
LAB_100561af8:
          pbVar4 = pbVar6 + 1;
          pbVar6 = pbVar4;
          while (pbVar5 = pbVar1, pbVar4 != pbVar1) {
LAB_100561b8c:
            if (*pbVar4 - 0x3a < 0xfffffff6) {
              uVar7 = *pbVar4 - 0x2b;
              pbVar5 = pbVar4;
              if (0x3b < uVar7) break;
              if ((1L << ((ulong)uVar7 & 0x3f) & 0x40000000400000dU) == 0) {
                if ((1L << ((ulong)uVar7 & 0x3f) & 0x800000008000000U) != 0) {
                  FUN_10050ef90(*(undefined8 *)(unaff_x20 + 0x38),pbVar3,pbVar6,0);
                  uVar7 = (uint)pbVar6;
                  *(byte **)(unaff_x20 + 0x28) = pbVar4 + 1;
                  goto LAB_100561b28;
                }
                break;
              }
            }
            pbVar4 = pbVar4 + 1;
            *(byte **)(unaff_x20 + 0x28) = pbVar4;
            pbVar6 = pbVar6 + 1;
          }
          FUN_10050ef90(*(undefined8 *)(unaff_x20 + 0x38),pbVar3,pbVar5,0);
          uVar7 = (uint)pbVar5;
LAB_100561b28:
          FUN_100560bb8();
          goto LAB_100561b48;
        }
      }
      else if (uVar7 == 0x30) {
        pbVar4 = pbVar6 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar4;
        if ((pbVar4 == pbVar1) || (*pbVar4 - 0x3a < 0xfffffff6)) goto LAB_100561af8;
      }
      else {
        pbVar4 = pbVar6;
        if (0xfffffff6 < uVar7 - 0x3a) goto LAB_100561b8c;
      }
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar3;
  }
  pbVar3 = (byte *)0x0;
  uVar7 = 1;
LAB_100561b48:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = pbVar3;
  auVar8._12_4_ = 0;
  return auVar8;
}

