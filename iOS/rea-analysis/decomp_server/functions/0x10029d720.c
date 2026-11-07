// rea decompile_all
// name: FUN_10029d720
// address: 0x10029d720
// body: available
// range: 0x10029d720-0x10029dee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029db80 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029dba4 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029dc4c to 0x100278f18 FUN_100278f18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029dd0c to 0x100278e14 FUN_100278e14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029dd30 to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029dd64 to 0x10027ba4c FUN_10027ba4c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029de7c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029d720(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  lVar14 = *(long *)(lVar5 + -8);
  uVar15 = *(ulong *)(lVar14 + 0x40);
  lVar17 = *(long *)(lVar6 + -8);
  uVar18 = *(ulong *)(lVar17 + 0x40);
  if (uVar18 <= uVar15) {
    uVar18 = uVar15;
  }
  lVar8 = 0;
  __s10Foundation10URLRequestVMa();
  lVar24 = *(long *)(lVar8 + -8);
  lVar19 = *(long *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    lVar19 = lVar19 + 1;
  }
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar25 = *(long *)(lVar9 + -8);
  uVar20 = *(uint *)(lVar25 + 0x50);
  uVar23 = (ulong)uVar20 & 0xff;
  lVar10 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar22 = *(long *)(lVar10 + -8);
  uVar26 = (ulong)((*(uint *)(lVar22 + 0x50) | uVar20) & 0xf8 | 7);
  uVar21 = *(ulong *)(lVar25 + 0x40);
  uVar2 = (uVar21 + uVar23 + (uVar23 + 8 & (uVar23 ^ 0xffffffffffffffff)) &
          (uVar23 ^ 0xffffffffffffffff)) + uVar21;
  uVar15 = (uVar21 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar15 <= uVar21) {
    uVar15 = uVar21;
  }
  if (uVar15 < 9) {
    uVar15 = 8;
  }
  if (uVar2 <= uVar15 + 1) {
    uVar2 = uVar15 + 1;
  }
  uVar3 = uVar21;
  if (uVar21 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar22 + 0x40);
  if (*(ulong *)(lVar22 + 0x40) <= uVar21) {
    uVar4 = uVar21;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (uVar2 <= uVar4 + 1) {
    uVar2 = uVar4 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  uVar1 = uVar2 + (uVar26 + (lVar19 + 7U & 0xfffffffffffffff8) + 0x10 &
                  (uVar26 ^ 0xffffffffffffffff)) + 1;
  if (uVar1 <= uVar18 + 1) {
    uVar1 = uVar18 + 1;
  }
  bVar7 = *(byte *)((long)param_1 + uVar1);
  uVar20 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_10029d8f4:
    if (uVar20 == 1) {
LAB_10029d8fc:
      uVar20 = (uint)uVar2;
      puVar11 = param_1;
      (**(code **)(lVar24 + 0x30))(param_1,1,lVar8);
      if ((int)puVar11 == 0) {
        (**(code **)(lVar24 + 8))(param_1,lVar8);
      }
      param_1 = (uint *)(((ulong)((long)param_1 + lVar19 + 7) & 0xfffffffffffffff8) + uVar26 + 0x10
                        & ~uVar26);
      bVar7 = *(byte *)((long)param_1 + uVar2);
      uVar13 = (uint)bVar7;
      uVar16 = 0xf0;
      if (uVar20 < 4) {
        uVar16 = 0xf0 - (1U >> (ulong)(uVar20 << 3 & 0x1f));
      }
      if ((bVar7 ^ 0xff) < uVar16) {
        return;
      }
      if (0xe < bVar7) {
        uVar16 = 4;
        if (uVar20 < 4) {
          uVar16 = uVar20;
        }
        if ((int)uVar16 < 2) {
          if (uVar16 == 0) goto LAB_10029db3c;
          uVar16 = (uint)(byte)*param_1;
        }
        else if (uVar16 == 2) {
          uVar16 = (uint)(ushort)*param_1;
        }
        else if (uVar16 == 3) {
          uVar16 = (uint)(uint3)*param_1;
        }
        else {
          uVar16 = *param_1;
        }
        uVar13 = uVar16 | bVar7 - 0xf << (ulong)(uVar20 << 3 & 0x1f);
        if (3 < uVar20) {
          uVar13 = uVar16;
        }
        uVar13 = uVar13 + 0xf;
      }
LAB_10029db3c:
      switch(uVar13) {
      case 0:
      case 1:
      case 7:
      case 0xc:
      case 0xd:
        break;
      case 2:
        _swift_errorRelease(*(undefined8 *)param_1);
        uVar18 = (ulong)(uVar23 + 8 + (long)param_1) & ~uVar23;
        UNRECOVERED_JUMPTABLE = *(code **)(lVar25 + 8);
        (*UNRECOVERED_JUMPTABLE)(uVar18,lVar9);
        param_1 = (uint *)(uVar21 + uVar23 + uVar18 & ~uVar23);
        goto LAB_10029dae4;
      case 3:
        FUN_10003f094(param_1);
        return;
      case 4:
        bVar7 = *(byte *)((long)param_1 + uVar15);
        uVar20 = (uint)bVar7;
        if (0xc < bVar7) {
          uVar13 = (uint)uVar15;
          uVar16 = 4;
          if (uVar13 < 4) {
            uVar16 = uVar13;
          }
          if ((int)uVar16 < 2) {
            if (uVar16 == 0) goto LAB_10029deb8;
            uVar16 = (uint)(byte)*param_1;
          }
          else if (uVar16 == 2) {
            uVar16 = (uint)(ushort)*param_1;
          }
          else if (uVar16 == 3) {
            uVar16 = (uint)(uint3)*param_1;
          }
          else {
            uVar16 = *param_1;
          }
          uVar20 = uVar16 | bVar7 - 0xd << (ulong)((uVar13 & 3) << 3);
          if (3 < uVar13) {
            uVar20 = uVar16;
          }
          uVar20 = uVar20 + 0xd;
        }
LAB_10029deb8:
                    /* WARNING: Could not recover jumptable at 0x00010029ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&DAT_1008173a1)[uVar20] * 4 + 0x10029db60))(0);
        return;
      case 5:
        FUN_10027ba4c(*(undefined8 *)param_1);
        return;
      case 6:
        FUN_100278f18(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(byte)param_1[4]);
        return;
      case 8:
        _swift_errorRelease(*(undefined8 *)param_1);
        uVar12 = *(undefined8 *)(param_1 + 2);
        goto LAB_10029db64;
      case 9:
        bVar7 = *(byte *)((long)param_1 + uVar3);
        uVar20 = (uint)bVar7;
        if (4 < bVar7) {
          uVar13 = (uint)uVar3;
          uVar16 = 4;
          if (uVar13 < 4) {
            uVar16 = uVar13;
          }
          if ((int)uVar16 < 2) {
            if (uVar16 == 0) goto LAB_10029ddb8;
            uVar20 = (uint)(byte)*param_1;
          }
          else if (uVar16 == 2) {
            uVar20 = (uint)(ushort)*param_1;
          }
          else if (uVar16 == 3) {
            uVar20 = (uint)(uint3)*param_1;
          }
          else {
            uVar20 = *param_1;
          }
          if (uVar13 < 4) {
            uVar20 = (uVar20 | bVar7 - 5 << (ulong)((uVar13 & 3) << 3)) + 5;
          }
          else {
            uVar20 = uVar20 + 5;
          }
        }
LAB_10029ddb8:
        if ((int)uVar20 < 2) {
          if (uVar20 != 0) {
            if (uVar20 != 1) {
              return;
            }
            uVar12 = *(undefined8 *)param_1;
            goto LAB_10029de60;
          }
LAB_10029ded4:
          UNRECOVERED_JUMPTABLE = *(code **)(lVar25 + 8);
          goto LAB_10029dae4;
        }
        if (uVar20 == 2) {
          _swift_bridgeObjectRelease(*(undefined8 *)param_1);
          uVar12 = *(undefined8 *)(param_1 + 4);
LAB_10029de60:
          _swift_bridgeObjectRelease(uVar12);
          return;
        }
        if (uVar20 != 4) {
switchD_10029db5c_default:
          return;
        }
        break;
      case 10:
        bVar7 = *(byte *)((long)param_1 + uVar4);
        uVar20 = (uint)bVar7;
        if (5 < bVar7) {
          uVar13 = (uint)uVar4;
          uVar16 = 4;
          if (uVar13 < 4) {
            uVar16 = uVar13;
          }
          if ((int)uVar16 < 2) {
            if (uVar16 == 0) goto LAB_10029de24;
            uVar20 = (uint)(byte)*param_1;
          }
          else if (uVar16 == 2) {
            uVar20 = (uint)(ushort)*param_1;
          }
          else if (uVar16 == 3) {
            uVar20 = (uint)(uint3)*param_1;
          }
          else {
            uVar20 = *param_1;
          }
          if (uVar13 < 4) {
            uVar20 = (uVar20 | bVar7 - 6 << (ulong)((uVar13 & 3) << 3)) + 6;
          }
          else {
            uVar20 = uVar20 + 6;
          }
        }
LAB_10029de24:
        if ((int)uVar20 < 3) {
          if (uVar20 == 0) goto LAB_10029ded4;
          if (uVar20 == 1) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 8);
            lVar9 = lVar10;
            goto LAB_10029dae4;
          }
          if (uVar20 != 2) {
            return;
          }
        }
        else if ((uVar20 != 3) && (uVar20 != 4)) {
          if (uVar20 != 5) {
            return;
          }
          uVar12 = *(undefined8 *)(param_1 + 2);
          goto LAB_10029de60;
        }
        break;
      case 0xb:
        FUN_100278e14(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),
                      *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                      *(undefined8 *)(param_1 + 8),(byte)param_1[10]);
        return;
      case 0xe:
        FUN_100006cdc(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
        return;
      default:
        goto switchD_10029db5c_default;
      }
      uVar12 = *(undefined8 *)param_1;
LAB_10029db64:
      _swift_errorRelease(uVar12);
      return;
    }
  }
  else {
    uVar13 = (uint)uVar1;
    uVar16 = 4;
    if (uVar13 < 4) {
      uVar16 = uVar13;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_10029d8f4;
      uVar20 = (uint)(byte)*param_1;
    }
    else if (uVar16 == 2) {
      uVar20 = (uint)(ushort)*param_1;
    }
    else if (uVar16 == 3) {
      uVar20 = (uint)(uint3)*param_1;
    }
    else {
      uVar20 = *param_1;
    }
    if (3 < uVar13) {
      uVar20 = uVar20 + 2;
      goto LAB_10029d8f4;
    }
    if ((uVar20 | bVar7 - 2 << (ulong)((uVar13 & 3) << 3)) == 0xffffffff) goto LAB_10029d8fc;
  }
  bVar7 = *(byte *)((long)param_1 + uVar18);
  uVar20 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_10029da94:
    if (uVar20 == 1) {
LAB_10029da9c:
      UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
      lVar9 = lVar6;
      goto LAB_10029dae4;
    }
  }
  else {
    uVar13 = (uint)uVar18;
    uVar16 = 4;
    if (uVar13 < 4) {
      uVar16 = uVar13;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_10029da94;
      uVar20 = (uint)(byte)*param_1;
    }
    else if (uVar16 == 2) {
      uVar20 = (uint)(ushort)*param_1;
    }
    else if (uVar16 == 3) {
      uVar20 = (uint)(uint3)*param_1;
    }
    else {
      uVar20 = *param_1;
    }
    if (3 < uVar13) {
      uVar20 = uVar20 + 2;
      goto LAB_10029da94;
    }
    if ((uVar20 | bVar7 - 2 << (ulong)((uVar13 & 3) << 3)) == 0xffffffff) goto LAB_10029da9c;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
  lVar9 = lVar5;
LAB_10029dae4:
                    /* WARNING: Could not recover jumptable at 0x00010029db00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar9);
  return;
}

