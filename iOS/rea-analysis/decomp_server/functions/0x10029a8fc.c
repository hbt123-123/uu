// rea decompile_all
// name: FUN_10029a8fc
// address: 0x10029a8fc
// body: available
// range: 0x10029a8fc-0x10029b08b inclusive
// range: 0x10029b0ac-0x10029b2af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10029a8fc(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  size_t sVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined8 *local_68;
  
  local_70 = *(ulong *)(param_3 + 0x10);
  local_78 = *(ulong *)(param_3 + 0x18);
  local_80 = *(ulong *)(local_70 - 8);
  local_88 = *(ulong *)(local_78 - 8);
  uVar2 = *(ulong *)(local_88 + 0x40);
  if (*(ulong *)(local_88 + 0x40) <= *(ulong *)(local_80 + 0x40)) {
    uVar2 = *(ulong *)(local_80 + 0x40);
  }
  lVar8 = 0;
  local_68 = param_1;
  __s10Foundation10URLRequestVMa();
  lVar28 = *(long *)(lVar8 + -8);
  sVar16 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar16 = sVar16 + 1;
  }
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar23 = *(long *)(lVar9 + -8);
  uVar15 = *(uint *)(lVar23 + 0x50);
  uVar29 = (ulong)uVar15 & 0xff;
  lVar10 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar26 = local_68;
  lVar21 = *(long *)(lVar10 + -8);
  uVar24 = (ulong)((*(uint *)(lVar21 + 0x50) | uVar15) & 0xf8 | 7);
  uVar18 = *(ulong *)(lVar23 + 0x40);
  lVar1 = uVar18 + uVar29;
  uVar27 = (lVar1 + (uVar29 + 8 & (uVar29 ^ 0xffffffffffffffff)) & (uVar29 ^ 0xffffffffffffffff)) +
           uVar18;
  uVar25 = (uVar18 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar25 <= uVar18) {
    uVar25 = uVar18;
  }
  if (uVar25 < 9) {
    uVar25 = 8;
  }
  if (uVar27 <= uVar25 + 1) {
    uVar27 = uVar25 + 1;
  }
  uVar3 = uVar18;
  if (uVar18 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar27 <= uVar3 + 1) {
    uVar27 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar21 + 0x40);
  if (*(ulong *)(lVar21 + 0x40) <= uVar18) {
    uVar4 = uVar18;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (uVar27 <= uVar4 + 1) {
    uVar27 = uVar4 + 1;
  }
  if (uVar27 < 0x2a) {
    uVar27 = 0x29;
  }
  uVar18 = uVar27 + 1 +
           (uVar24 + (sVar16 + 7 & 0xfffffffffffffff8) + 0x10 & (uVar24 ^ 0xffffffffffffffff));
  if (uVar18 <= uVar2 + 1) {
    uVar18 = uVar2 + 1;
  }
  bVar5 = *(byte *)((long)param_2 + uVar18);
  uVar15 = (uint)bVar5;
  if (bVar5 < 2) {
    if (bVar5 == 1) goto LAB_10029aae0;
  }
  else {
    uVar19 = (uint)uVar18;
    uVar13 = 4;
    if (uVar19 < 4) {
      uVar13 = uVar19;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 != 0) {
        uVar15 = (uint)(byte)*param_2;
        goto joined_r0x00010029aac4;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar15 = (uint)(ushort)*param_2;
      }
      else if (uVar13 == 3) {
        uVar15 = (uint)(uint3)*param_2;
      }
      else {
        uVar15 = *param_2;
      }
joined_r0x00010029aac4:
      if (3 < uVar19) {
        if (uVar15 == 0xffffffff) goto LAB_10029aae0;
        goto LAB_10029ac7c;
      }
      uVar15 = (uVar15 | bVar5 - 2 << (ulong)((uVar19 & 3) << 3)) + 2;
    }
    if (uVar15 == 1) {
LAB_10029aae0:
      uVar15 = (int)uVar27 << 3;
      local_88 = CONCAT44(local_88._4_4_,uVar15);
      puVar11 = param_2;
      local_80 = uVar29 + 8;
      local_78 = uVar18;
      local_70 = uVar27;
      (**(code **)(lVar28 + 0x30))(param_2,1,lVar8);
      puVar26 = local_68;
      if ((int)puVar11 == 0) {
        (**(code **)(lVar28 + 0x20))(local_68,param_2,lVar8);
        (**(code **)(lVar28 + 0x38))(puVar26,0,1,lVar8);
      }
      else {
        _memcpy(local_68,param_2,sVar16);
      }
      uVar2 = local_70;
      puVar14 = (undefined8 *)((long)puVar26 + sVar16 + 7 & 0xfffffffffffffff8);
      puVar17 = (undefined8 *)((ulong)((long)param_2 + sVar16 + 7) & 0xfffffffffffffff8);
      *puVar14 = *puVar17;
      puVar14 = puVar14 + 1;
      puVar17 = puVar17 + 1;
      *puVar14 = *puVar17;
      puVar11 = (uint *)((long)puVar17 + uVar24 + 8 & ~uVar24);
      bVar5 = *(byte *)((long)puVar11 + local_70);
      uVar13 = (uint)bVar5;
      puVar14 = (undefined8 *)((long)puVar14 + uVar24 + 8 & ~uVar24);
      uVar20 = (uint)local_70;
      uVar19 = 0xf0;
      if (uVar20 < 4) {
        uVar19 = 0xf0 - (1U >> (ulong)(uVar15 & 0x1f));
      }
      if ((bVar5 ^ 0xff) < uVar19) {
switchD_10029adec_default:
        _memcpy(puVar14,puVar11,uVar27 + 1);
      }
      else {
        if (0xe < bVar5) {
          uVar15 = 4;
          if (uVar20 < 4) {
            uVar15 = uVar20;
          }
          if ((int)uVar15 < 2) {
            if (uVar15 == 0) goto LAB_10029adcc;
            uVar15 = (uint)(byte)*puVar11;
          }
          else if (uVar15 == 2) {
            uVar15 = (uint)(ushort)*puVar11;
          }
          else if (uVar15 == 3) {
            uVar15 = (uint)(uint3)*puVar11;
          }
          else {
            uVar15 = *puVar11;
          }
          if (uVar20 < 4) {
            uVar13 = (uVar15 | uVar13 - 0xf << (ulong)((uint)local_88 & 0x1f)) + 0xf;
          }
          else {
            uVar13 = uVar15 + 0xf;
          }
        }
LAB_10029adcc:
        switch(uVar13) {
        case 0:
          *puVar14 = *(undefined8 *)puVar11;
          *(undefined1 *)((long)puVar14 + local_70) = 0;
          break;
        case 1:
          *puVar14 = *(undefined8 *)puVar11;
          *(undefined1 *)((long)puVar14 + local_70) = 1;
          break;
        case 2:
          uVar29 = ~uVar29;
          *puVar14 = *(undefined8 *)puVar11;
          uVar25 = local_80 + (long)puVar14 & uVar29;
          uVar27 = (ulong)(local_80 + (long)puVar11) & uVar29;
          pcVar22 = *(code **)(lVar23 + 0x20);
          (*pcVar22)(uVar25,uVar27,lVar9);
          puVar26 = local_68;
          (*pcVar22)(lVar1 + uVar25 & uVar29,lVar1 + uVar27 & uVar29,lVar9);
          *(undefined1 *)((long)puVar14 + uVar2) = 2;
          break;
        case 3:
          uVar31 = *(undefined8 *)(puVar11 + 2);
          uVar30 = *(undefined8 *)puVar11;
          uVar33 = *(undefined8 *)(puVar11 + 6);
          uVar32 = *(undefined8 *)(puVar11 + 4);
          puVar14[4] = *(undefined8 *)(puVar11 + 8);
          puVar14[1] = uVar31;
          *puVar14 = uVar30;
          puVar14[3] = uVar33;
          puVar14[2] = uVar32;
          *(undefined1 *)((long)puVar14 + local_70) = 3;
          break;
        case 4:
          bVar5 = *(byte *)((long)puVar11 + uVar25);
          uVar15 = (uint)bVar5;
          if (0xc < bVar5) {
            uVar19 = (uint)uVar25;
            uVar13 = 4;
            if (uVar19 < 4) {
              uVar13 = uVar19;
            }
            if ((int)uVar13 < 2) {
              if (uVar13 == 0) goto LAB_10029b070;
              uVar15 = (uint)(byte)*puVar11;
            }
            else if (uVar13 == 2) {
              uVar15 = (uint)(ushort)*puVar11;
            }
            else if (uVar13 == 3) {
              uVar15 = (uint)(uint3)*puVar11;
            }
            else {
              uVar15 = *puVar11;
            }
            if (uVar19 < 4) {
              uVar15 = (uVar15 | bVar5 - 0xd << (ulong)((uVar19 & 3) << 3)) + 0xd;
            }
            else {
              uVar15 = uVar15 + 0xd;
            }
          }
LAB_10029b070:
                    /* WARNING: Could not recover jumptable at 0x00010029b088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10029b08c + (ulong)(byte)(&DAT_100817307)[uVar15] * 4))();
          return puVar14;
        case 5:
          *puVar14 = *(undefined8 *)puVar11;
          *(undefined1 *)((long)puVar14 + local_70) = 5;
          break;
        case 6:
          uVar31 = *(undefined8 *)(puVar11 + 2);
          uVar30 = *(undefined8 *)puVar11;
          *(byte *)(puVar14 + 2) = (byte)puVar11[4];
          puVar14[1] = uVar31;
          *puVar14 = uVar30;
          *(undefined1 *)((long)puVar14 + local_70) = 6;
          break;
        case 7:
          *puVar14 = *(undefined8 *)puVar11;
          *(undefined1 *)((long)puVar14 + local_70) = 7;
          break;
        case 8:
          uVar30 = *(undefined8 *)puVar11;
          puVar14[1] = *(undefined8 *)(puVar11 + 2);
          *puVar14 = uVar30;
          *(undefined1 *)((long)puVar14 + local_70) = 8;
          break;
        case 9:
          bVar5 = *(byte *)((long)puVar11 + uVar3);
          uVar15 = (uint)bVar5;
          if (4 < bVar5) {
            uVar19 = (uint)uVar3;
            uVar13 = 4;
            if (uVar19 < 4) {
              uVar13 = uVar19;
            }
            if ((int)uVar13 < 2) {
              if (uVar13 == 0) goto LAB_10029b0d4;
              uVar15 = (uint)(byte)*puVar11;
            }
            else if (uVar13 == 2) {
              uVar15 = (uint)(ushort)*puVar11;
            }
            else if (uVar13 == 3) {
              uVar15 = (uint)(uint3)*puVar11;
            }
            else {
              uVar15 = *puVar11;
            }
            if (uVar19 < 4) {
              uVar15 = (uVar15 | bVar5 - 5 << (ulong)((uVar19 & 3) << 3)) + 5;
            }
            else {
              uVar15 = uVar15 + 5;
            }
          }
LAB_10029b0d4:
          if ((int)uVar15 < 2) {
            if (uVar15 == 0) {
              (**(code **)(lVar23 + 0x20))(puVar14,puVar11,lVar9);
              *(undefined1 *)((long)puVar14 + uVar3) = 0;
            }
            else {
              if (uVar15 == 1) {
                *puVar14 = *(undefined8 *)puVar11;
                uVar12 = 1;
                goto LAB_10029b144;
              }
LAB_10029b17c:
              _memcpy(puVar14,puVar11,uVar3 + 1);
            }
          }
          else {
            if (uVar15 == 2) {
              uVar31 = *(undefined8 *)(puVar11 + 2);
              uVar30 = *(undefined8 *)puVar11;
              puVar14[2] = *(undefined8 *)(puVar11 + 4);
              puVar14[1] = uVar31;
              *puVar14 = uVar30;
              uVar12 = 2;
            }
            else if (uVar15 == 3) {
              *puVar14 = *(undefined8 *)puVar11;
              uVar12 = 3;
            }
            else {
              if (uVar15 != 4) goto LAB_10029b17c;
              *puVar14 = *(undefined8 *)puVar11;
              uVar12 = 4;
            }
LAB_10029b144:
            *(undefined1 *)((long)puVar14 + uVar3) = uVar12;
          }
          *(undefined1 *)((long)puVar14 + local_70) = 9;
          break;
        case 10:
          bVar5 = *(byte *)((long)puVar11 + uVar4);
          uVar15 = (uint)bVar5;
          if (5 < bVar5) {
            uVar19 = (uint)uVar4;
            uVar13 = 4;
            if (uVar19 < 4) {
              uVar13 = uVar19;
            }
            if ((int)uVar13 < 2) {
              if (uVar13 == 0) goto LAB_10029b1c4;
              uVar15 = (uint)(byte)*puVar11;
            }
            else if (uVar13 == 2) {
              uVar15 = (uint)(ushort)*puVar11;
            }
            else if (uVar13 == 3) {
              uVar15 = (uint)(uint3)*puVar11;
            }
            else {
              uVar15 = *puVar11;
            }
            if (uVar19 < 4) {
              uVar15 = (uVar15 | bVar5 - 6 << (ulong)((uVar19 & 3) << 3)) + 6;
            }
            else {
              uVar15 = uVar15 + 6;
            }
          }
LAB_10029b1c4:
          if ((int)uVar15 < 3) {
            if (uVar15 == 0) {
              (**(code **)(lVar23 + 0x20))(puVar14,puVar11,lVar9);
              *(undefined1 *)((long)puVar14 + uVar4) = 0;
            }
            else if (uVar15 == 1) {
              (**(code **)(lVar21 + 0x20))(puVar14,puVar11,lVar10);
              *(undefined1 *)((long)puVar14 + uVar4) = 1;
            }
            else {
              if (uVar15 == 2) {
                *puVar14 = *(undefined8 *)puVar11;
                uVar12 = 2;
                goto LAB_10029b29c;
              }
LAB_10029b250:
              _memcpy(puVar14,puVar11,uVar4 + 1);
            }
          }
          else {
            if (uVar15 == 3) {
              *puVar14 = *(undefined8 *)puVar11;
              uVar12 = 3;
            }
            else if (uVar15 == 4) {
              *puVar14 = *(undefined8 *)puVar11;
              uVar12 = 4;
            }
            else {
              if (uVar15 != 5) goto LAB_10029b250;
              uVar30 = *(undefined8 *)puVar11;
              puVar14[1] = *(undefined8 *)(puVar11 + 2);
              *puVar14 = uVar30;
              uVar12 = 5;
            }
LAB_10029b29c:
            *(undefined1 *)((long)puVar14 + uVar4) = uVar12;
          }
          *(undefined1 *)((long)puVar14 + local_70) = 10;
          break;
        case 0xb:
          uVar31 = *(undefined8 *)(puVar11 + 2);
          uVar30 = *(undefined8 *)puVar11;
          uVar33 = *(undefined8 *)(puVar11 + 6);
          uVar32 = *(undefined8 *)(puVar11 + 4);
          uVar34 = *(undefined8 *)((long)puVar11 + 0x19);
          *(undefined8 *)((long)puVar14 + 0x21) = *(undefined8 *)((long)puVar11 + 0x21);
          *(undefined8 *)((long)puVar14 + 0x19) = uVar34;
          puVar14[1] = uVar31;
          *puVar14 = uVar30;
          puVar14[3] = uVar33;
          puVar14[2] = uVar32;
          *(undefined1 *)((long)puVar14 + local_70) = 0xb;
          break;
        case 0xc:
          *puVar14 = *(undefined8 *)puVar11;
          *(undefined1 *)((long)puVar14 + local_70) = 0xc;
          break;
        case 0xd:
          *puVar14 = *(undefined8 *)puVar11;
          *(undefined1 *)((long)puVar14 + local_70) = 0xd;
          break;
        case 0xe:
          uVar30 = *(undefined8 *)puVar11;
          puVar14[1] = *(undefined8 *)(puVar11 + 2);
          *puVar14 = uVar30;
          *(undefined1 *)((long)puVar14 + local_70) = 0xe;
          break;
        default:
          goto switchD_10029adec_default;
        }
      }
      *(undefined1 *)((long)puVar26 + local_78) = 1;
      uVar18 = local_78;
      goto LAB_10029ad48;
    }
  }
LAB_10029ac7c:
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar15 = (uint)bVar5;
  if (1 < bVar5) {
    uVar19 = (uint)uVar2;
    uVar13 = 4;
    if (uVar19 < 4) {
      uVar13 = uVar19;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_10029ad0c;
      uVar15 = (uint)(byte)*param_2;
    }
    else if (uVar13 == 2) {
      uVar15 = (uint)(ushort)*param_2;
    }
    else if (uVar13 == 3) {
      uVar15 = (uint)(uint3)*param_2;
    }
    else {
      uVar15 = *param_2;
    }
    if (uVar19 < 4) {
      uVar15 = (uVar15 | bVar5 - 2 << (ulong)((uVar19 & 3) << 3)) + 2;
    }
    else {
      uVar15 = uVar15 + 2;
    }
  }
LAB_10029ad0c:
  bVar7 = uVar15 == 1;
  puVar6 = &local_88;
  if (!bVar7) {
    puVar6 = &local_80;
  }
  uVar25 = local_78;
  if (!bVar7) {
    uVar25 = local_70;
  }
  (**(code **)(*puVar6 + 0x20))(local_68,param_2,uVar25);
  *(bool *)((long)puVar26 + uVar2) = bVar7;
  *(undefined1 *)((long)puVar26 + uVar18) = 0;
LAB_10029ad48:
  _swift_weakTakeInit(uVar18 + 8 + (long)puVar26 & 0xfffffffffffffff8,
                      (ulong)(uVar18 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return puVar26;
}

