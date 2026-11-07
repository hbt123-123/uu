// rea decompile_all
// name: FUN_100305f10
// address: 0x100305f10
// body: available
// range: 0x100305f10-0x100306673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100306130 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100306254 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100306340 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003063f4 to 0x100278f18 FUN_100278f18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003064b4 to 0x100278e14 FUN_100278e14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003064d8 to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10030650c to 0x10027ba4c FUN_10027ba4c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100305f10(uint *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
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
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  lVar21 = *(long *)(lVar5 + -8);
  uVar14 = *(ulong *)(lVar21 + 0x40);
  lVar24 = *(long *)(lVar6 + -8);
  uVar16 = *(ulong *)(lVar24 + 0x40);
  if (uVar14 <= uVar16) {
    uVar14 = uVar16;
  }
  lVar8 = 0;
  __s10Foundation10URLRequestVMa();
  lVar25 = *(long *)(lVar8 + -8);
  lVar17 = *(long *)(lVar25 + 0x40);
  if (*(int *)(lVar25 + 0x54) == 0) {
    lVar17 = lVar17 + 1;
  }
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar22 = *(long *)(lVar9 + -8);
  uVar18 = *(uint *)(lVar22 + 0x50);
  uVar23 = (ulong)uVar18 & 0xff;
  lVar10 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar20 = *(long *)(lVar10 + -8);
  uVar26 = (ulong)((*(uint *)(lVar20 + 0x50) | uVar18) & 0xf8 | 7);
  uVar19 = *(ulong *)(lVar22 + 0x40);
  uVar1 = (uVar19 + uVar23 + (uVar23 + 8 & (uVar23 ^ 0xffffffffffffffff)) &
          (uVar23 ^ 0xffffffffffffffff)) + uVar19;
  uVar16 = (uVar19 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar16 <= uVar19) {
    uVar16 = uVar19;
  }
  if (uVar16 < 9) {
    uVar16 = 8;
  }
  if (uVar1 <= uVar16 + 1) {
    uVar1 = uVar16 + 1;
  }
  uVar3 = uVar19;
  if (uVar19 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar1 <= uVar3 + 1) {
    uVar1 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar20 + 0x40);
  if (*(ulong *)(lVar20 + 0x40) <= uVar19) {
    uVar4 = uVar19;
  }
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  if (uVar1 <= uVar4 + 1) {
    uVar1 = uVar4 + 1;
  }
  if (uVar1 < 0x2a) {
    uVar1 = 0x29;
  }
  lVar2 = uVar1 + (uVar26 + (lVar17 + 7U & 0xfffffffffffffff8) + 0x10 &
                  (uVar26 ^ 0xffffffffffffffff));
  if (uVar14 <= lVar2 + 1U) {
    uVar14 = lVar2 + 1;
  }
  if (uVar14 < 0x19) {
    uVar14 = 0x18;
  }
  bVar7 = *(byte *)((long)param_1 + uVar14);
  uVar18 = (uint)bVar7;
  if (bVar7 < 5) {
    if (1 < bVar7) goto LAB_1003060f0;
  }
  else {
    uVar13 = (uint)uVar14;
    uVar15 = 4;
    if (uVar13 < 4) {
      uVar15 = uVar13;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 != 0) {
        uVar18 = (uint)(byte)*param_1;
        goto joined_r0x0001003060d4;
      }
    }
    else {
      if (uVar15 == 2) {
        uVar18 = (uint)(ushort)*param_1;
      }
      else if (uVar15 == 3) {
        uVar18 = (uint)(uint3)*param_1;
      }
      else {
        uVar18 = *param_1;
      }
joined_r0x0001003060d4:
      if (uVar13 < 4) {
        uVar18 = (uVar18 | bVar7 - 5 << (ulong)((uVar13 & 3) << 3)) + 5;
      }
      else {
        uVar18 = uVar18 + 5;
      }
    }
    if (1 < (int)uVar18) {
LAB_1003060f0:
      if (uVar18 == 2) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 8);
        lVar9 = lVar6;
        goto LAB_100306264;
      }
      if (uVar18 == 3) {
        uVar14 = *(ulong *)(param_1 + 4);
        if (0xe < uVar14 >> 0x3c) {
          return;
        }
        uVar12 = *(undefined8 *)(param_1 + 2);
        goto LAB_100306114;
      }
      uVar18 = (uint)uVar1;
      puVar11 = param_1;
      (**(code **)(lVar25 + 0x30))(param_1,1);
      if ((int)puVar11 == 0) {
        (**(code **)(lVar25 + 8))(param_1,lVar8);
      }
      param_1 = (uint *)(((ulong)((long)param_1 + lVar17 + 7) & 0xfffffffffffffff8) + uVar26 + 0x10
                        & ~uVar26);
      bVar7 = *(byte *)((long)param_1 + uVar1);
      uVar13 = (uint)bVar7;
      uVar15 = 0xf0;
      if (uVar18 < 4) {
        uVar15 = 0xf0 - (1U >> (ulong)(uVar18 << 3 & 0x1f));
      }
      if ((bVar7 ^ 0xff) < uVar15) {
        return;
      }
      if (0xe < bVar7) {
        uVar15 = 4;
        if (uVar18 < 4) {
          uVar15 = uVar18;
        }
        if ((int)uVar15 < 2) {
          if (uVar15 == 0) goto LAB_1003062fc;
          uVar15 = (uint)(byte)*param_1;
        }
        else if (uVar15 == 2) {
          uVar15 = (uint)(ushort)*param_1;
        }
        else if (uVar15 == 3) {
          uVar15 = (uint)(uint3)*param_1;
        }
        else {
          uVar15 = *param_1;
        }
        uVar13 = uVar15 | bVar7 - 0xf << (ulong)(uVar18 << 3 & 0x1f);
        if (3 < uVar18) {
          uVar13 = uVar15;
        }
        uVar13 = uVar13 + 0xf;
      }
LAB_1003062fc:
      switch(uVar13) {
      case 2:
        _swift_errorRelease(*(undefined8 *)param_1);
        uVar14 = (ulong)(uVar23 + 8 + (long)param_1) & ~uVar23;
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 8);
        (*UNRECOVERED_JUMPTABLE)(uVar14,lVar9);
        param_1 = (uint *)(uVar19 + uVar23 + uVar14 & ~uVar23);
        goto LAB_100306264;
      case 3:
        FUN_10003f094(param_1);
        return;
      case 4:
        bVar7 = *(byte *)((long)param_1 + uVar16);
        uVar18 = (uint)bVar7;
        if (0xc < bVar7) {
          uVar13 = (uint)uVar16;
          uVar15 = 4;
          if (uVar13 < 4) {
            uVar15 = uVar13;
          }
          if ((int)uVar15 < 2) {
            if (uVar15 == 0) goto LAB_100306648;
            uVar18 = (uint)(byte)*param_1;
          }
          else if (uVar15 == 2) {
            uVar18 = (uint)(ushort)*param_1;
          }
          else if (uVar15 == 3) {
            uVar18 = (uint)(uint3)*param_1;
          }
          else {
            uVar18 = *param_1;
          }
          if (uVar13 < 4) {
            uVar18 = (uVar18 | bVar7 - 0xd << (ulong)((uVar13 & 3) << 3)) + 0xd;
          }
          else {
            uVar18 = uVar18 + 0xd;
          }
        }
LAB_100306648:
                    /* WARNING: Could not recover jumptable at 0x000100306660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&DAT_100819321)[uVar18] * 4 + 0x100306320))(0);
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
        goto LAB_100306324;
      case 9:
        bVar7 = *(byte *)((long)param_1 + uVar3);
        uVar18 = (uint)bVar7;
        if (4 < bVar7) {
          uVar13 = (uint)uVar3;
          uVar15 = 4;
          if (uVar13 < 4) {
            uVar15 = uVar13;
          }
          if ((int)uVar15 < 2) {
            if (uVar15 == 0) goto LAB_100306560;
            uVar18 = (uint)(byte)*param_1;
          }
          else if (uVar15 == 2) {
            uVar18 = (uint)(ushort)*param_1;
          }
          else if (uVar15 == 3) {
            uVar18 = (uint)(uint3)*param_1;
          }
          else {
            uVar18 = *param_1;
          }
          if (uVar13 < 4) {
            uVar18 = (uVar18 | bVar7 - 5 << (ulong)((uVar13 & 3) << 3)) + 5;
          }
          else {
            uVar18 = uVar18 + 5;
          }
        }
LAB_100306560:
        if ((int)uVar18 < 2) {
          if (uVar18 != 0) {
            if (uVar18 != 1) {
              return;
            }
            uVar12 = *(undefined8 *)param_1;
            goto LAB_100306238;
          }
LAB_100306664:
          UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 8);
          goto LAB_100306264;
        }
        if (uVar18 == 2) {
          _swift_bridgeObjectRelease(*(undefined8 *)param_1);
          uVar12 = *(undefined8 *)(param_1 + 4);
          goto LAB_100306238;
        }
        if (uVar18 != 4) {
switchD_10030631c_default:
          return;
        }
      case 0:
      case 1:
      case 7:
      case 0xc:
      case 0xd:
switchD_10030631c_caseD_0:
        uVar12 = *(undefined8 *)param_1;
LAB_100306324:
        _swift_errorRelease(uVar12);
        return;
      case 10:
        goto switchD_10030631c_caseD_a;
      case 0xb:
        FUN_100278e14(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),
                      *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                      *(undefined8 *)(param_1 + 8),(byte)param_1[10]);
        return;
      case 0xe:
        uVar12 = *(undefined8 *)param_1;
        uVar14 = *(ulong *)(param_1 + 2);
LAB_100306114:
        FUN_100006cdc(uVar12,uVar14);
        return;
      default:
        goto switchD_10030631c_default;
      }
    }
  }
  if (uVar18 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 8);
    lVar9 = lVar5;
LAB_100306264:
                    /* WARNING: Could not recover jumptable at 0x000100306280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,lVar9);
    return;
  }
LAB_100306234:
  uVar12 = *(undefined8 *)(param_1 + 2);
LAB_100306238:
  _swift_bridgeObjectRelease(uVar12);
  return;
switchD_10030631c_caseD_a:
  bVar7 = *(byte *)((long)param_1 + uVar4);
  uVar18 = (uint)bVar7;
  if (5 < bVar7) {
    uVar13 = (uint)uVar4;
    uVar15 = 4;
    if (uVar13 < 4) {
      uVar15 = uVar13;
    }
    if ((int)uVar15 < 2) {
      if (uVar15 == 0) goto LAB_1003065d0;
      uVar18 = (uint)(byte)*param_1;
    }
    else if (uVar15 == 2) {
      uVar18 = (uint)(ushort)*param_1;
    }
    else if (uVar15 == 3) {
      uVar18 = (uint)(uint3)*param_1;
    }
    else {
      uVar18 = *param_1;
    }
    if (uVar13 < 4) {
      uVar18 = (uVar18 | bVar7 - 6 << (ulong)((uVar13 & 3) << 3)) + 6;
    }
    else {
      uVar18 = uVar18 + 6;
    }
  }
LAB_1003065d0:
  if ((int)uVar18 < 3) {
    if (uVar18 == 0) goto LAB_100306664;
    if (uVar18 == 1) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 8);
      lVar9 = lVar10;
      goto LAB_100306264;
    }
    if (uVar18 != 2) {
      return;
    }
    goto switchD_10030631c_caseD_0;
  }
  if ((uVar18 == 3) || (uVar18 == 4)) goto switchD_10030631c_caseD_0;
  if (uVar18 != 5) {
    return;
  }
  goto LAB_100306234;
}

