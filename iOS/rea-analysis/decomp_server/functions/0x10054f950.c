// rea decompile_all
// name: FUN_10054f950
// address: 0x10054f950
// body: available
// range: 0x10054f950-0x10054fceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054f950(ulong *param_1)

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
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  
  puVar10 = param_1;
  FUN_100560bb8();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 != pbVar1) && (*pbVar8 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_100560bb8();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 == pbVar1) || (*pbVar8 != 0x5b)) {
      FUN_10055e368();
      if (unaff_x21 != 0) {
        return;
      }
      uVar11 = *param_1;
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_1005076b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar11 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_1005076b4(uVar11,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(ulong **)(uVar11 + uVar6 * 8 + 0x20) = puVar10;
      *param_1 = uVar11;
      return;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_100560bb8();
    bVar3 = true;
    do {
      pbVar8 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar8 == pbVar1) {
        if (!bVar3) goto LAB_10054fab0;
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
LAB_10054fab0:
          if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
            do {
              pbVar8 = pbVar8 + 1;
LAB_10054fac8:
              *(byte **)(unaff_x20 + 0x28) = pbVar8;
              if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_10054fa60;
            } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar2 != 0x23) goto LAB_10054fa60;
            pbVar9 = pbVar8 + 1;
            while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
              pbVar8 = pbVar9 + 1;
              bVar2 = *pbVar9;
              if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
            }
            goto LAB_10054fac8;
          }
          break;
        }
      }
LAB_10054fa60:
      if (pbVar8 == pbVar1) goto LAB_10054fc70;
      if (*pbVar8 == 0x2d) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(unaff_x20 + 0x28) = pbVar8;
        if ((pbVar8 == pbVar1) || (*pbVar8 - 0x3a < 0xfffffff6)) goto LAB_10054fc70;
        FUN_10055e428();
        if (unaff_x21 != 0) {
          return;
        }
        if (-1 < (long)puVar10) {
          puVar10 = (ulong *)-(long)puVar10;
          goto LAB_10054fb40;
        }
        if (puVar10 != (ulong *)0x8000000000000000) goto LAB_10054fc70;
        puVar12 = (ulong *)*param_1;
        puVar10 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = (ulong *)0x8000000000000000;
      }
      else {
        FUN_10055e428();
        if (unaff_x21 != 0) {
          return;
        }
        if ((long)puVar10 < 0) goto LAB_10054fc70;
LAB_10054fb40:
        puVar12 = (ulong *)*param_1;
        puVar5 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = puVar10;
        puVar10 = puVar5;
      }
      if (((ulong)puVar10 & 1) == 0) {
        puVar10 = (ulong *)0x0;
        FUN_1005076b4(0,puVar12[2] + 1,1,puVar12);
        puVar12 = puVar10;
      }
      uVar6 = puVar12[2];
      if (puVar12[3] >> 1 <= uVar6) {
        puVar10 = (ulong *)(ulong)(1 < puVar12[3]);
        FUN_1005076b4(puVar10,uVar6 + 1,1,puVar12);
        puVar12 = puVar10;
      }
      bVar3 = false;
      puVar12[2] = uVar6 + 1;
      puVar12[uVar6 + 4] = (ulong)puVar4;
      *param_1 = (ulong)puVar12;
    } while( true );
  }
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar10,0,0);
  *(undefined1 *)puVar10 = 0;
LAB_10054fc00:
  _swift_willThrow();
  return;
LAB_10054fc70:
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar10,0,0);
  *(undefined1 *)puVar10 = 1;
  goto LAB_10054fc00;
}

