// rea decompile_all
// name: FUN_10055e868
// address: 0x10055e868
// body: available
// range: 0x10055e868-0x10055ea1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055e868(undefined1 *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long unaff_x20;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  FUN_100560bb8();
  pbVar6 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar6 != pbVar1) {
    bVar2 = *pbVar6;
    param_1 = (undefined1 *)(ulong)bVar2;
    if ((bVar2 == 0x27) || (bVar2 == 0x22)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar6 + 1;
      FUN_100561970();
      if (param_2 != (undefined1 *)0x0) {
        pbVar6 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar6 == pbVar1) {
          return;
        }
LAB_10055e8d4:
        bVar2 = *pbVar6;
        if ((bVar2 != 0x22) && (bVar2 != 0x27)) {
          return;
        }
        bVar10 = false;
        pbVar4 = pbVar6 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar4;
        pbVar7 = pbVar4;
        do {
          pbVar5 = pbVar7 + ~(ulong)pbVar6;
          do {
            pbVar8 = pbVar7;
            pbVar9 = pbVar1;
            if (pbVar8 == pbVar1) goto LAB_10055e9c4;
            bVar3 = *pbVar8;
            if (bVar3 == bVar2) {
              FUN_10054c680();
              *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
              FUN_100560bb8();
              if (pbVar5 == (byte *)0x0) goto LAB_10055e9c8;
              pbVar6 = pbVar5;
              if (bVar10) {
                FUN_10055f314(pbVar4);
                _swift_bridgeObjectRelease(pbVar5);
                if (pbVar6 == (byte *)0x0) goto LAB_10055e9c8;
              }
              __sSS6appendyySSF(pbVar4,pbVar6);
              _swift_bridgeObjectRelease(pbVar6);
              pbVar6 = *(byte **)(unaff_x20 + 0x28);
              if (pbVar6 == pbVar1) {
                return;
              }
              goto LAB_10055e8d4;
            }
            pbVar9 = pbVar8 + 1;
            if (bVar3 == 10 || bVar3 == 0xd) goto LAB_10055e9c4;
            pbVar5 = pbVar5 + 1;
            pbVar7 = pbVar9;
          } while (bVar3 != 0x5c);
          pbVar7 = pbVar8 + 2;
          bVar10 = true;
        } while (pbVar9 != pbVar1);
LAB_10055e9c4:
        *(byte **)(unaff_x20 + 0x28) = pbVar9;
LAB_10055e9c8:
        _swift_bridgeObjectRelease();
        param_1 = param_2;
      }
    }
  }
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,param_1,0,0);
  *param_1 = 0;
  _swift_willThrow();
  return;
}

