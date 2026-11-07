// rea decompile_all
// name: FUN_1005502f8
// address: 0x1005502f8
// body: available
// range: 0x1005502f8-0x1005505f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005502f8(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ulong *puVar11;
  
  puVar4 = param_1;
  FUN_100560bb8();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_100550510:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_100560bb8();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_100560bb8();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_100550458;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_100560bb8();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_100550458:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_100550470:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_100550408;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_100550408;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_100550470;
            }
            goto LAB_100550510;
          }
        }
LAB_100550408:
        FUN_10055e428();
        if (unaff_x21 != 0) {
          return;
        }
        puVar11 = (ulong *)*param_1;
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          FUN_1005076dc(0,puVar11[2] + 1,1,puVar11);
          puVar11 = puVar5;
        }
        uVar6 = puVar11[2];
        if (puVar11[3] >> 1 <= uVar6) {
          puVar5 = (ulong *)(ulong)(1 < puVar11[3]);
          FUN_1005076dc(puVar5,uVar6 + 1,1,puVar11);
          puVar11 = puVar5;
        }
        bVar3 = false;
        puVar11[2] = uVar6 + 1;
        puVar11[uVar6 + 4] = (ulong)puVar4;
        *param_1 = (ulong)puVar11;
        puVar4 = puVar5;
      } while( true );
    }
    FUN_10055e428();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_1005076dc(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_1005076dc(uVar10,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(ulong **)(uVar10 + uVar6 * 8 + 0x20) = puVar4;
      *param_1 = uVar10;
    }
  }
  return;
}

