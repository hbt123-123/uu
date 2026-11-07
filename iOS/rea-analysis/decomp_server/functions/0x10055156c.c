// rea decompile_all
// name: FUN_10055156c
// address: 0x10055156c
// body: available
// range: 0x10055156c-0x10055189b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055156c(undefined1 *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 *local_70;
  long local_68;
  
  local_68 = *(long *)(param_2 + -8);
  uVar7 = *(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_80 + -uVar7;
  local_78 = (long)puVar11 - uVar7;
  puVar10 = (undefined1 *)(local_78 - uVar7);
  local_70 = param_1;
  FUN_100560bb8();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_1005517c0:
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,param_1,0,0);
    *param_1 = 0;
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
          if (!bVar3) goto LAB_100551748;
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
LAB_100551748:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_100551760:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_1005516d4;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_1005516d4;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_100551760;
            }
            goto LAB_1005517c0;
          }
        }
LAB_1005516d4:
        FUN_100551198(puVar10,param_2,param_3);
        lVar5 = local_68;
        lVar4 = local_78;
        if (unaff_x21 != 0) {
          return;
        }
        (**(code **)(local_68 + 0x10))(local_78,puVar10,param_2);
        uVar6 = 0;
        __sSaMa(0,param_2);
        __sSa6appendyyxnF(lVar4,uVar6);
        param_1 = puVar10;
        (**(code **)(lVar5 + 8))(puVar10,param_2);
        bVar3 = false;
      } while( true );
    }
    FUN_100551198(puVar11,param_2,param_3);
    lVar5 = local_68;
    lVar4 = local_78;
    if (unaff_x21 == 0) {
      (**(code **)(local_68 + 0x10))(local_78,puVar11,param_2);
      uVar6 = 0;
      __sSaMa(0,param_2);
      __sSa6appendyyxnF(lVar4,uVar6);
      (**(code **)(lVar5 + 8))(puVar11,param_2);
    }
  }
  return;
}

