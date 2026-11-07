// rea decompile_all
// name: FUN_100300b34
// address: 0x100300b34
// body: available
// range: 0x100300b34-0x100301283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100300d84 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100300dac to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100300f60 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100301014 to 0x100278f18 FUN_100278f18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003010d0 to 0x100278e14 FUN_100278e14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003010f4 to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100301128 to 0x10027ba4c FUN_10027ba4c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300b34(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  _swift_weakDestroy();
  lVar6 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(param_2 + 0x18);
  lVar28 = *(long *)(lVar6 + -8);
  uVar20 = *(uint *)(lVar28 + 0x50);
  lVar29 = *(long *)(lVar7 + -8);
  uVar18 = *(uint *)(lVar29 + 0x50);
  lVar11 = 0;
  __s10Foundation10URLRequestVMa();
  lVar27 = *(long *)(lVar11 + -8);
  uVar16 = *(uint *)(lVar27 + 0x50);
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar12 + -8);
  uVar8 = *(uint *)(lVar24 + 0x50);
  lVar13 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar23 = *(long *)(lVar13 + -8);
  uVar10 = *(uint *)(lVar23 + 0x50) | uVar8;
  uVar19 = (ulong)((uVar18 | uVar20 | uVar16 | uVar10) & 0xf8 | 7);
  uVar26 = (ulong)uVar8 & 0xff;
  uVar17 = (ulong)(uVar10 & 0xf8 | 7);
  puVar25 = (uint *)(param_1 + uVar19 + 8 & (uVar19 ^ 0xffffffffffffffff));
  uVar19 = *(ulong *)(lVar28 + 0x40);
  if (*(ulong *)(lVar28 + 0x40) <= *(ulong *)(lVar29 + 0x40)) {
    uVar19 = *(ulong *)(lVar29 + 0x40);
  }
  lVar21 = *(long *)(lVar27 + 0x40);
  if (*(int *)(lVar27 + 0x54) == 0) {
    lVar21 = lVar21 + 1;
  }
  uVar22 = *(ulong *)(lVar24 + 0x40);
  uVar2 = (uVar22 + uVar26 + (uVar26 + 8 & (uVar26 ^ 0xffffffffffffffff)) &
          (uVar26 ^ 0xffffffffffffffff)) + uVar22;
  uVar1 = (uVar22 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar22) {
    uVar1 = uVar22;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  if (uVar2 <= uVar1 + 1) {
    uVar2 = uVar1 + 1;
  }
  uVar4 = uVar22;
  if (uVar22 < 0x19) {
    uVar4 = 0x18;
  }
  if (uVar2 <= uVar4 + 1) {
    uVar2 = uVar4 + 1;
  }
  uVar5 = *(ulong *)(lVar23 + 0x40);
  if (*(ulong *)(lVar23 + 0x40) <= uVar22) {
    uVar5 = uVar22;
  }
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (uVar2 <= uVar5 + 1) {
    uVar2 = uVar5 + 1;
  }
  if (uVar2 < 0x2a) {
    uVar2 = 0x29;
  }
  lVar3 = uVar2 + (uVar17 + 8 + (lVar21 + 7U & 0xfffffffffffffff8) + 8 &
                  (uVar17 ^ 0xffffffffffffffff));
  if (uVar19 <= lVar3 + 1U) {
    uVar19 = lVar3 + 1;
  }
  if (uVar19 < 0x19) {
    uVar19 = 0x18;
  }
  bVar9 = *(byte *)((long)puVar25 + uVar19);
  uVar20 = (uint)bVar9;
  if (4 < bVar9) {
    uVar16 = (uint)uVar19;
    uVar18 = 4;
    if (uVar16 < 4) {
      uVar18 = uVar16;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100300d3c;
      uVar18 = (uint)(byte)*puVar25;
    }
    else if (uVar18 == 2) {
      uVar18 = (uint)(ushort)*puVar25;
    }
    else if (uVar18 == 3) {
      uVar18 = (uint)(uint3)*puVar25;
    }
    else {
      uVar18 = *puVar25;
    }
    uVar20 = uVar18 | bVar9 - 5 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar20 = uVar18;
    }
    uVar20 = uVar20 + 5;
  }
LAB_100300d3c:
  if ((int)uVar20 < 2) {
    if (uVar20 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar28 + 8);
      lVar12 = lVar6;
      goto LAB_100300e88;
    }
    uVar14 = *(undefined8 *)(puVar25 + 2);
    goto LAB_100300d90;
  }
  if (uVar20 == 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar29 + 8);
    lVar12 = lVar7;
    goto LAB_100300e88;
  }
  if (uVar20 == 3) {
    uVar19 = *(ulong *)(puVar25 + 4);
    if (0xe < uVar19 >> 0x3c) {
      return;
    }
    uVar14 = *(undefined8 *)(puVar25 + 2);
    goto LAB_100300d68;
  }
  uVar20 = (uint)uVar2;
  puVar15 = puVar25;
  (**(code **)(lVar27 + 0x30))(puVar25,1,lVar11);
  if ((int)puVar15 == 0) {
    (**(code **)(lVar27 + 8))(puVar25,lVar11);
  }
  puVar25 = (uint *)(uVar17 + 8 + ((ulong)(lVar21 + 7U + (long)puVar25) & 0xfffffffffffffff8) + 8 &
                    ~uVar17);
  bVar9 = *(byte *)((long)puVar25 + uVar2);
  uVar16 = (uint)bVar9;
  uVar18 = 0xf0;
  if (uVar20 < 4) {
    uVar18 = 0xf0 - (1U >> (ulong)(uVar20 << 3 & 0x1f));
  }
  if ((bVar9 ^ 0xff) < uVar18) {
    return;
  }
  if (0xe < bVar9) {
    uVar18 = 4;
    if (uVar20 < 4) {
      uVar18 = uVar20;
    }
    if ((int)uVar18 < 2) {
      if (uVar18 == 0) goto LAB_100300f1c;
      uVar18 = (uint)(byte)*puVar25;
    }
    else if (uVar18 == 2) {
      uVar18 = (uint)(ushort)*puVar25;
    }
    else if (uVar18 == 3) {
      uVar18 = (uint)(uint3)*puVar25;
    }
    else {
      uVar18 = *puVar25;
    }
    uVar16 = uVar18 | bVar9 - 0xf << (ulong)(uVar20 << 3 & 0x1f);
    if (3 < uVar20) {
      uVar16 = uVar18;
    }
    uVar16 = uVar16 + 0xf;
  }
LAB_100300f1c:
  switch(uVar16) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    break;
  case 2:
    _swift_errorRelease(*(undefined8 *)puVar25);
    uVar19 = (ulong)(uVar26 + 8 + (long)puVar25) & ~uVar26;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 8);
    (*UNRECOVERED_JUMPTABLE)(uVar19,lVar12);
    puVar25 = (uint *)(uVar22 + uVar26 + uVar19 & ~uVar26);
    goto LAB_100300e88;
  case 3:
    FUN_10003f094(puVar25);
    return;
  case 4:
    bVar9 = *(byte *)((long)puVar25 + uVar1);
    uVar20 = (uint)bVar9;
    if (0xc < bVar9) {
      uVar16 = (uint)uVar1;
      uVar18 = 4;
      if (uVar16 < 4) {
        uVar18 = uVar16;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_100301258;
        uVar18 = (uint)(byte)*puVar25;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar25;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar25;
      }
      else {
        uVar18 = *puVar25;
      }
      uVar20 = uVar18 | bVar9 - 0xd << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar20 = uVar18;
      }
      uVar20 = uVar20 + 0xd;
    }
LAB_100301258:
                    /* WARNING: Could not recover jumptable at 0x000100301270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&DAT_1008191df)[uVar20] * 4 + 0x100300f40))(0);
    return;
  case 5:
    FUN_10027ba4c(*(undefined8 *)puVar25);
    return;
  case 6:
    FUN_100278f18(*(undefined8 *)puVar25,*(undefined8 *)(puVar25 + 2),(byte)puVar25[4]);
    return;
  case 8:
    _swift_errorRelease(*(undefined8 *)puVar25);
    uVar14 = *(undefined8 *)(puVar25 + 2);
    goto LAB_100300f44;
  case 9:
    bVar9 = *(byte *)((long)puVar25 + uVar4);
    uVar20 = (uint)bVar9;
    if (4 < bVar9) {
      uVar16 = (uint)uVar4;
      uVar18 = 4;
      if (uVar16 < 4) {
        uVar18 = uVar16;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_100301178;
        uVar18 = (uint)(byte)*puVar25;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar25;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar25;
      }
      else {
        uVar18 = *puVar25;
      }
      uVar20 = uVar18 | bVar9 - 5 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar20 = uVar18;
      }
      uVar20 = uVar20 + 5;
    }
LAB_100301178:
    if ((int)uVar20 < 2) {
      if (uVar20 != 0) {
        if (uVar20 != 1) {
          return;
        }
        uVar14 = *(undefined8 *)puVar25;
        goto LAB_100300d90;
      }
LAB_100301274:
      UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 8);
LAB_100300e88:
                    /* WARNING: Could not recover jumptable at 0x000100300ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar25,lVar12);
      return;
    }
    if (uVar20 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)puVar25);
      uVar14 = *(undefined8 *)(puVar25 + 4);
LAB_100300d90:
      _swift_bridgeObjectRelease(uVar14);
      return;
    }
    if (uVar20 != 4) {
switchD_100300f3c_default:
      return;
    }
    break;
  case 10:
    bVar9 = *(byte *)((long)puVar25 + uVar5);
    uVar20 = (uint)bVar9;
    if (5 < bVar9) {
      uVar16 = (uint)uVar5;
      uVar18 = 4;
      if (uVar16 < 4) {
        uVar18 = uVar16;
      }
      if ((int)uVar18 < 2) {
        if (uVar18 == 0) goto LAB_1003011e0;
        uVar18 = (uint)(byte)*puVar25;
      }
      else if (uVar18 == 2) {
        uVar18 = (uint)(ushort)*puVar25;
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*puVar25;
      }
      else {
        uVar18 = *puVar25;
      }
      uVar20 = uVar18 | bVar9 - 6 << (ulong)((uVar16 & 3) << 3);
      if (3 < uVar16) {
        uVar20 = uVar18;
      }
      uVar20 = uVar20 + 6;
    }
LAB_1003011e0:
    if ((int)uVar20 < 3) {
      if (uVar20 == 0) goto LAB_100301274;
      if (uVar20 == 1) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar23 + 8);
        lVar12 = lVar13;
        goto LAB_100300e88;
      }
      if (uVar20 != 2) {
        return;
      }
    }
    else if ((uVar20 != 3) && (uVar20 != 4)) {
      if (uVar20 != 5) {
        return;
      }
      uVar14 = *(undefined8 *)(puVar25 + 2);
      goto LAB_100300d90;
    }
    break;
  case 0xb:
    FUN_100278e14(*(undefined8 *)puVar25,*(undefined8 *)(puVar25 + 2),*(undefined8 *)(puVar25 + 4),
                  *(undefined8 *)(puVar25 + 6),*(undefined8 *)(puVar25 + 8),(byte)puVar25[10]);
    return;
  case 0xe:
    uVar14 = *(undefined8 *)puVar25;
    uVar19 = *(ulong *)(puVar25 + 2);
LAB_100300d68:
    FUN_100006cdc(uVar14,uVar19);
    return;
  default:
    goto switchD_100300f3c_default;
  }
  uVar14 = *(undefined8 *)puVar25;
LAB_100300f44:
  _swift_errorRelease(uVar14);
  return;
}

