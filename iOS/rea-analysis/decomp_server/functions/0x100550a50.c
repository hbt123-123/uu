// rea decompile_all
// name: FUN_100550a50
// address: 0x100550a50
// body: available
// range: 0x100550a50-0x100550d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100550a50(ulong *param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong *puVar12;
  
  puVar5 = param_1;
  FUN_100560bb8();
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar9 == pbVar2) || (*pbVar9 != 0x3a)) {
LAB_100550c7c:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
    FUN_100560bb8();
    pbVar9 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
      FUN_100560bb8();
      bVar4 = true;
      do {
        pbVar9 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar9 == pbVar2) {
          if (!bVar4) goto LAB_100550bc4;
        }
        else {
          bVar3 = *pbVar9;
          if (bVar3 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
            FUN_100560bb8();
            return;
          }
          if (!bVar4) {
            if (bVar3 < 0x24) {
              do {
                if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar3 != 0x23) break;
                  pbVar10 = pbVar9 + 1;
                  while (pbVar9 = pbVar2, pbVar10 != pbVar2) {
                    pbVar9 = pbVar10 + 1;
                    bVar3 = *pbVar10;
                    if ((bVar3 == 10) || (pbVar10 = pbVar9, bVar3 == 0xd)) break;
                  }
                }
                else {
                  pbVar9 = pbVar9 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar9;
                if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) break;
              } while( true );
            }
LAB_100550bc4:
            if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2c)) {
              do {
                pbVar9 = pbVar9 + 1;
LAB_100550bdc:
                *(byte **)(unaff_x20 + 0x28) = pbVar9;
                if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) goto LAB_100550b64;
              } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar3 != 0x23) goto LAB_100550b64;
              pbVar10 = pbVar9 + 1;
              while (pbVar9 = pbVar2, pbVar10 != pbVar2) {
                pbVar9 = pbVar10 + 1;
                bVar3 = *pbVar10;
                if ((bVar3 == 10) || (pbVar10 = pbVar9, bVar3 == 0xd)) break;
              }
              goto LAB_100550bdc;
            }
            goto LAB_100550c7c;
          }
        }
LAB_100550b64:
        FUN_10055e868();
        if (unaff_x21 != 0) {
          return;
        }
        puVar12 = (ulong *)*param_1;
        puVar6 = puVar12;
        uVar7 = param_2;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          uVar7 = puVar12[2] + 1;
          puVar6 = (ulong *)0x0;
          FUN_100507174(0,uVar7,1,puVar12);
          puVar12 = puVar6;
        }
        uVar11 = puVar12[2];
        uVar8 = uVar11 + 1;
        if (puVar12[3] >> 1 <= uVar11) {
          puVar6 = (ulong *)(ulong)(1 < puVar12[3]);
          uVar7 = uVar8;
          FUN_100507174(puVar6,uVar8,1,puVar12);
          puVar12 = puVar6;
        }
        bVar4 = false;
        puVar12[2] = uVar8;
        puVar12[uVar11 * 2 + 4] = (ulong)puVar5;
        puVar12[uVar11 * 2 + 5] = param_2;
        *param_1 = (ulong)puVar12;
        puVar5 = puVar6;
        param_2 = uVar7;
      } while( true );
    }
    FUN_10055e868();
    if (unaff_x21 == 0) {
      uVar11 = *param_1;
      uVar7 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar11;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        FUN_100507174(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar11 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100507174(uVar11,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar11 + 0x10) = uVar7 + 1;
      lVar1 = uVar11 + uVar7 * 0x10;
      *(ulong **)(lVar1 + 0x20) = puVar5;
      *(ulong *)(lVar1 + 0x28) = param_2;
      *param_1 = uVar11;
    }
  }
  return;
}

