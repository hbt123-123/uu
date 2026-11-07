// rea decompile_all
// name: FUN_10054f57c
// address: 0x10054f57c
// body: available
// range: 0x10054f57c-0x10054f917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054f57c(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long unaff_x20;
  ulong uVar9;
  long unaff_x21;
  ulong *puVar10;
  ulong *puVar11;
  
  puVar4 = param_1;
  FUN_100560bb8();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar7 == pbVar1) || (*pbVar7 != 0x3a)) {
LAB_10054f7f0:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
    FUN_100560bb8();
    pbVar7 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar7 != pbVar1) && (*pbVar7 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_100560bb8();
      bVar3 = true;
      do {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          if (!bVar3) goto LAB_10054f6dc;
        }
        else {
          bVar2 = *pbVar7;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
            FUN_100560bb8();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar8 = pbVar7 + 1;
                  while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                    pbVar7 = pbVar8 + 1;
                    bVar2 = *pbVar8;
                    if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar7 = pbVar7 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_10054f6dc:
            if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2c)) {
              do {
                pbVar7 = pbVar7 + 1;
LAB_10054f6f4:
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) goto LAB_10054f68c;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_10054f68c;
              pbVar8 = pbVar7 + 1;
              while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                pbVar7 = pbVar8 + 1;
                bVar2 = *pbVar8;
                if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
              }
              goto LAB_10054f6f4;
            }
            goto LAB_10054f7f0;
          }
        }
LAB_10054f68c:
        if (pbVar7 == pbVar1) goto LAB_10054f854;
        if (*pbVar7 == 0x2d) {
          pbVar7 = pbVar7 + 1;
          *(byte **)(unaff_x20 + 0x28) = pbVar7;
          if ((pbVar7 == pbVar1) || (*pbVar7 - 0x3a < 0xfffffff6)) goto LAB_10054f854;
          FUN_10055e428();
          if (unaff_x21 != 0) {
            return;
          }
          if ((long)puVar4 < 0) goto LAB_10054f854;
          puVar10 = (ulong *)-(long)puVar4;
        }
        else {
          FUN_10055e428();
          if (unaff_x21 != 0) {
            return;
          }
          puVar10 = puVar4;
          if ((long)puVar4 < 0) goto LAB_10054f854;
        }
        if (puVar10 != (ulong *)(long)(int)puVar10) goto LAB_10054f854;
        puVar11 = (ulong *)*param_1;
        puVar4 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = (ulong *)0x0;
          FUN_1005074a0(0,puVar11[2] + 1,1,puVar11);
          puVar11 = puVar4;
        }
        uVar5 = puVar11[2];
        if (puVar11[3] >> 1 <= uVar5) {
          puVar4 = (ulong *)(ulong)(1 < puVar11[3]);
          FUN_1005074a0(puVar4,uVar5 + 1,1,puVar11);
          puVar11 = puVar4;
        }
        bVar3 = false;
        puVar11[2] = uVar5 + 1;
        *(int *)((long)puVar11 + uVar5 * 4 + 0x20) = (int)puVar10;
        *param_1 = (ulong)puVar11;
      } while( true );
    }
    FUN_10055e368();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar4 == (ulong *)(long)(int)puVar4) {
      uVar9 = *param_1;
      uVar5 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar9;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_1005074a0(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      uVar9 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1005074a0(uVar9,uVar5 + 1,1,uVar6);
      }
      *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
      *(int *)(uVar9 + uVar5 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar9;
      return;
    }
LAB_10054f854:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar4,0,0);
    *(undefined1 *)puVar4 = 1;
  }
  _swift_willThrow();
  return;
}

