// rea decompile_all
// name: FUN_100298298
// address: 0x100298298
// body: available
// range: 0x100298298-0x1002989bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002986e0 to 0x1007df5c8 _swift_weakDestroy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100298298(uint *param_1,long param_2)

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
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  lVar13 = *(long *)(lVar5 + -8);
  uVar14 = *(ulong *)(lVar13 + 0x40);
  lVar17 = *(long *)(lVar6 + -8);
  uVar18 = *(ulong *)(lVar17 + 0x40);
  if (uVar18 <= uVar14) {
    uVar18 = uVar14;
  }
  lVar8 = 0;
  __s10Foundation10URLRequestVMa();
  lVar27 = *(long *)(lVar8 + -8);
  lVar19 = *(long *)(lVar27 + 0x40);
  if (*(int *)(lVar27 + 0x54) == 0) {
    lVar19 = lVar19 + 1;
  }
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar25 = *(long *)(lVar9 + -8);
  uVar15 = *(uint *)(lVar25 + 0x50);
  uVar26 = (ulong)uVar15 & 0xff;
  lVar10 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar21 = *(long *)(lVar10 + -8);
  uVar22 = (ulong)((*(uint *)(lVar21 + 0x50) | uVar15) & 0xf8 | 7);
  uVar20 = *(ulong *)(lVar25 + 0x40);
  uVar2 = (uVar20 + uVar26 + (uVar26 + 8 & (uVar26 ^ 0xffffffffffffffff)) &
          (uVar26 ^ 0xffffffffffffffff)) + uVar20;
  uVar14 = (uVar20 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar14 <= uVar20) {
    uVar14 = uVar20;
  }
  if (uVar14 < 9) {
    uVar14 = 8;
  }
  if (uVar2 <= uVar14 + 1) {
    uVar2 = uVar14 + 1;
  }
  uVar3 = uVar20;
  if (uVar20 < 0x19) {
    uVar3 = 0x18;
  }
  if (uVar2 <= uVar3 + 1) {
    uVar2 = uVar3 + 1;
  }
  uVar4 = *(ulong *)(lVar21 + 0x40);
  if (*(ulong *)(lVar21 + 0x40) <= uVar20) {
    uVar4 = uVar20;
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
  uVar1 = uVar2 + (uVar22 + (lVar19 + 7U & 0xfffffffffffffff8) + 0x10 &
                  (uVar22 ^ 0xffffffffffffffff)) + 1;
  if (uVar1 <= uVar18 + 1) {
    uVar1 = uVar18 + 1;
  }
  bVar7 = *(byte *)((long)param_1 + uVar1);
  uVar15 = (uint)bVar7;
  if (bVar7 < 2) {
LAB_10029846c:
    if (uVar15 != 1) {
LAB_100298588:
      bVar7 = *(byte *)((long)param_1 + uVar18);
      uVar15 = (uint)bVar7;
      if (bVar7 < 2) {
LAB_1002985f8:
        if (uVar15 == 1) {
LAB_100298600:
          (**(code **)(lVar17 + 8))(param_1,lVar6);
          goto switchD_1002986ac_default;
        }
      }
      else {
        uVar12 = (uint)uVar18;
        uVar16 = 4;
        if (uVar12 < 4) {
          uVar16 = uVar12;
        }
        if ((int)uVar16 < 2) {
          if (uVar16 == 0) goto LAB_1002985f8;
          uVar15 = (uint)(byte)*param_1;
        }
        else if (uVar16 == 2) {
          uVar15 = (uint)(ushort)*param_1;
        }
        else if (uVar16 == 3) {
          uVar15 = (uint)(uint3)*param_1;
        }
        else {
          uVar15 = *param_1;
        }
        if (3 < uVar12) {
          uVar15 = uVar15 + 2;
          goto LAB_1002985f8;
        }
        if ((uVar15 | bVar7 - 2 << (ulong)((uVar12 & 3) << 3)) == 0xffffffff) goto LAB_100298600;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar5);
      goto switchD_1002986ac_default;
    }
  }
  else {
    uVar12 = (uint)uVar1;
    uVar16 = 4;
    if (uVar12 < 4) {
      uVar16 = uVar12;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_10029846c;
      uVar15 = (uint)(byte)*param_1;
    }
    else if (uVar16 == 2) {
      uVar15 = (uint)(ushort)*param_1;
    }
    else if (uVar16 == 3) {
      uVar15 = (uint)(uint3)*param_1;
    }
    else {
      uVar15 = *param_1;
    }
    if (3 < uVar12) {
      uVar15 = uVar15 + 2;
      goto LAB_10029846c;
    }
    if ((uVar15 | bVar7 - 2 << (ulong)((uVar12 & 3) << 3)) != 0xffffffff) goto LAB_100298588;
  }
  uVar15 = (uint)uVar2;
  puVar23 = param_1;
  (**(code **)(lVar27 + 0x30))(param_1,1,lVar8);
  if ((int)puVar23 == 0) {
    (**(code **)(lVar27 + 8))(param_1,lVar8);
  }
  puVar23 = (uint *)(((ulong)((long)param_1 + lVar19 + 7) & 0xfffffffffffffff8) + uVar22 + 0x10 &
                    ~uVar22);
  bVar7 = *(byte *)((long)puVar23 + uVar2);
  uVar12 = (uint)bVar7;
  uVar16 = 0xf0;
  if (uVar15 < 4) {
    uVar16 = 0xf0 - (1U >> (ulong)(uVar15 << 3 & 0x1f));
  }
  if ((bVar7 ^ 0xff) < uVar16) goto switchD_1002986ac_default;
  if (0xe < bVar7) {
    uVar16 = 4;
    if (uVar15 < 4) {
      uVar16 = uVar15;
    }
    if ((int)uVar16 < 2) {
      if (uVar16 == 0) goto LAB_10029868c;
      uVar16 = (uint)(byte)*puVar23;
    }
    else if (uVar16 == 2) {
      uVar16 = (uint)(ushort)*puVar23;
    }
    else if (uVar16 == 3) {
      uVar16 = (uint)(uint3)*puVar23;
    }
    else {
      uVar16 = *puVar23;
    }
    uVar12 = uVar16 | bVar7 - 0xf << (ulong)(uVar15 << 3 & 0x1f);
    if (3 < uVar15) {
      uVar12 = uVar16;
    }
    uVar12 = uVar12 + 0xf;
  }
LAB_10029868c:
  switch(uVar12) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002986ac_caseD_0;
  case 2:
    _swift_errorRelease(*(undefined8 *)puVar23);
    uVar18 = (ulong)(uVar26 + 8 + (long)puVar23) & ~uVar26;
    pcVar24 = *(code **)(lVar25 + 8);
    (*pcVar24)(uVar18,lVar9);
    (*pcVar24)(uVar20 + uVar26 + uVar18 & ~uVar26,lVar9);
    break;
  case 3:
    FUN_10003f094(puVar23);
    break;
  case 4:
    bVar7 = *(byte *)((long)puVar23 + uVar14);
    uVar15 = (uint)bVar7;
    if (0xc < bVar7) {
      uVar12 = (uint)uVar14;
      uVar16 = 4;
      if (uVar12 < 4) {
        uVar16 = uVar12;
      }
      if ((int)uVar16 < 2) {
        if (uVar16 == 0) goto LAB_10029898c;
        uVar16 = (uint)(byte)*puVar23;
      }
      else if (uVar16 == 2) {
        uVar16 = (uint)(ushort)*puVar23;
      }
      else if (uVar16 == 3) {
        uVar16 = (uint)(uint3)*puVar23;
      }
      else {
        uVar16 = *puVar23;
      }
      uVar15 = uVar16 | bVar7 - 0xd << (ulong)((uVar12 & 3) << 3);
      if (3 < uVar12) {
        uVar15 = uVar16;
      }
      uVar15 = uVar15 + 0xd;
    }
LAB_10029898c:
                    /* WARNING: Could not recover jumptable at 0x0001002989a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&DAT_10081725f)[uVar15] * 4 + 0x1002986b0))(0);
    return;
  case 5:
    FUN_10027ba4c(*(undefined8 *)puVar23);
    break;
  case 6:
    FUN_100278f18(*(undefined8 *)puVar23,*(undefined8 *)(puVar23 + 2),(byte)puVar23[4]);
    break;
  case 8:
    _swift_errorRelease(*(undefined8 *)puVar23);
    uVar11 = *(undefined8 *)(puVar23 + 2);
    goto LAB_1002986b4;
  case 9:
    bVar7 = *(byte *)((long)puVar23 + uVar3);
    uVar15 = (uint)bVar7;
    if (4 < bVar7) {
      uVar12 = (uint)uVar3;
      uVar16 = 4;
      if (uVar12 < 4) {
        uVar16 = uVar12;
      }
      if ((int)uVar16 < 2) {
        if (uVar16 == 0) goto LAB_100298898;
        uVar15 = (uint)(byte)*puVar23;
      }
      else if (uVar16 == 2) {
        uVar15 = (uint)(ushort)*puVar23;
      }
      else if (uVar16 == 3) {
        uVar15 = (uint)(uint3)*puVar23;
      }
      else {
        uVar15 = *puVar23;
      }
      if (uVar12 < 4) {
        uVar15 = (uVar15 | bVar7 - 5 << (ulong)((uVar12 & 3) << 3)) + 5;
      }
      else {
        uVar15 = uVar15 + 5;
      }
    }
LAB_100298898:
    if ((int)uVar15 < 2) {
      if (uVar15 != 0) {
        if (uVar15 == 1) {
          _swift_bridgeObjectRelease(*(undefined8 *)puVar23);
        }
        break;
      }
LAB_1002989a8:
      (**(code **)(lVar25 + 8))(puVar23,lVar9);
      break;
    }
    if (uVar15 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)puVar23);
      _swift_bridgeObjectRelease(*(undefined8 *)(puVar23 + 4));
      break;
    }
    if (uVar15 != 4) break;
    goto switchD_1002986ac_caseD_0;
  case 10:
    bVar7 = *(byte *)((long)puVar23 + uVar4);
    uVar15 = (uint)bVar7;
    if (5 < bVar7) {
      uVar12 = (uint)uVar4;
      uVar16 = 4;
      if (uVar12 < 4) {
        uVar16 = uVar12;
      }
      if ((int)uVar16 < 2) {
        if (uVar16 == 0) goto LAB_10029890c;
        uVar15 = (uint)(byte)*puVar23;
      }
      else if (uVar16 == 2) {
        uVar15 = (uint)(ushort)*puVar23;
      }
      else if (uVar16 == 3) {
        uVar15 = (uint)(uint3)*puVar23;
      }
      else {
        uVar15 = *puVar23;
      }
      if (uVar12 < 4) {
        uVar15 = (uVar15 | bVar7 - 6 << (ulong)((uVar12 & 3) << 3)) + 6;
      }
      else {
        uVar15 = uVar15 + 6;
      }
    }
LAB_10029890c:
    if ((int)uVar15 < 3) {
      if (uVar15 == 0) goto LAB_1002989a8;
      if (uVar15 == 1) {
        (**(code **)(lVar21 + 8))(puVar23,lVar10);
        break;
      }
      if (uVar15 != 2) break;
    }
    else if ((uVar15 != 3) && (uVar15 != 4)) {
      if (uVar15 == 5) {
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar23 + 2));
      }
      break;
    }
switchD_1002986ac_caseD_0:
    uVar11 = *(undefined8 *)puVar23;
LAB_1002986b4:
    _swift_errorRelease(uVar11);
    break;
  case 0xb:
    FUN_100278e14(*(undefined8 *)puVar23,*(undefined8 *)(puVar23 + 2),*(undefined8 *)(puVar23 + 4),
                  *(undefined8 *)(puVar23 + 6),*(undefined8 *)(puVar23 + 8),(byte)puVar23[10]);
    break;
  case 0xe:
    FUN_100006cdc(*(undefined8 *)puVar23,*(undefined8 *)(puVar23 + 2));
  }
switchD_1002986ac_default:
  _swift_weakDestroy((ulong)((long)param_1 + uVar1 + 8) & 0xfffffffffffffff8);
  return;
}

