// rea decompile_all
// name: FUN_100550e5c
// address: 0x100550e5c
// body: available
// range: 0x100550e5c-0x100551197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100550e5c(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  
  puVar5 = param_1;
  FUN_100560bb8();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar2) || (*pbVar8 != 0x3a)) {
LAB_100551090:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_100560bb8();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar2) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_100560bb8();
      bVar4 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar2) {
          if (!bVar4) goto LAB_100550fd8;
        }
        else {
          bVar3 = *pbVar8;
          if (bVar3 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_100560bb8();
            return;
          }
          if (!bVar4) {
            if (bVar3 < 0x24) {
              do {
                if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar3 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar2, pbVar9 != pbVar2) {
                    pbVar8 = pbVar9 + 1;
                    bVar3 = *pbVar9;
                    if ((bVar3 == 10) || (pbVar9 = pbVar8, bVar3 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar2) || (bVar3 = *pbVar8, 0x23 < bVar3)) break;
              } while( true );
            }
LAB_100550fd8:
            if ((pbVar8 != pbVar2) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_100550ff0:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar2) || (bVar3 = *pbVar8, 0x23 < bVar3)) goto LAB_100550f70;
              } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar3 != 0x23) goto LAB_100550f70;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar2, pbVar9 != pbVar2) {
                pbVar8 = pbVar9 + 1;
                bVar3 = *pbVar9;
                if ((bVar3 == 10) || (pbVar9 = pbVar8, bVar3 == 0xd)) break;
              }
              goto LAB_100550ff0;
            }
            goto LAB_100551090;
          }
        }
LAB_100550f70:
        FUN_10055ea1c();
        if (unaff_x21 != 0) {
          return;
        }
        uVar10 = *param_1;
        FUN_100008184();
        uVar7 = uVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar10;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
          FUN_1005077e0(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        }
        uVar7 = *(ulong *)(uVar6 + 0x10);
        uVar10 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_1005077e0(uVar10,uVar7 + 1,1,uVar6);
        }
        *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
        lVar1 = uVar10 + uVar7 * 0x10;
        *(ulong **)(lVar1 + 0x20) = puVar5;
        *(undefined8 *)(lVar1 + 0x28) = param_2;
        FUN_100006cdc();
        bVar4 = false;
        *param_1 = uVar10;
      } while( true );
    }
    FUN_10055ea1c();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      FUN_100008184();
      uVar7 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        FUN_1005077e0(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1005077e0(uVar10,uVar7 + 1,1,uVar6);
        uVar6 = uVar10;
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + 1;
      lVar1 = uVar6 + uVar7 * 0x10;
      *(ulong **)(lVar1 + 0x20) = puVar5;
      *(undefined8 *)(lVar1 + 0x28) = param_2;
      FUN_100006cdc();
      *param_1 = uVar6;
    }
  }
  return;
}

