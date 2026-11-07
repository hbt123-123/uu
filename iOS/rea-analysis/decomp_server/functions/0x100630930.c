// rea decompile_all
// name: FUN_100630930
// address: 0x100630930
// body: available
// range: 0x100630930-0x100630c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined * FUN_100630930(undefined8 *******param_1,ulong param_2)

{
  byte bVar1;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 uVar14;
  long lVar16;
  undefined *local_78;
  undefined8 *******local_70;
  ulong uStack_68;
  int iVar2;
  int iVar15;
  
  uVar4 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  uVar8 = 0xb;
  if (((uint)(param_2 >> 0x3c) & (uint)(((ulong)param_1 & 0x800000000000000) == 0)) == 0) {
    uVar8 = 7;
  }
  uVar7 = 0xf;
  FUN_1001dfbb4(0xf,uVar8 | uVar4 << 0x10,param_1,param_2);
  local_78 = (undefined *)0x0;
  FUN_1006295a0(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0,
                PTR___swiftEmptyArrayStorage_100995ea0);
  uVar8 = 0;
  __sSS9hasPrefixySbSSF(0x7830,0xe200000000000000,param_1,param_2);
  if (uVar4 == 0) {
    _swift_bridgeObjectRelease(param_2);
    return local_78;
  }
  lVar16 = 0;
  lVar13 = 2;
  if ((uVar8 & 1) == 0) {
    lVar13 = 0;
  }
LAB_1006309f0:
  bVar5 = true;
  iVar15 = 0;
LAB_100630a18:
  uVar14 = (undefined1)iVar15;
  lVar13 = lVar13 + 1;
  do {
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        pppppppuVar11 = (undefined8 *******)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          pppppppuVar11 = param_1;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
        }
      }
      else {
        local_70 = param_1;
        uStack_68 = param_2 & 0xffffffffffffff;
        pppppppuVar11 = &local_70;
      }
      pbVar12 = (byte *)((long)pppppppuVar11 + lVar16);
      uVar6 = (uint)*pbVar12;
      if ((char)*pbVar12 < '\0') {
        uVar3 = (int)LZCOUNT(uVar6 ^ 0xff) - 0x18U & 0xff;
        if (uVar3 < 3) {
          if (uVar3 == 1) goto LAB_100630a60;
          uVar6 = pbVar12[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pppppppuVar11 = (undefined8 *******)0x2;
        }
        else if (uVar3 == 3) {
          uVar6 = (uVar6 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          pppppppuVar11 = (undefined8 *******)0x3;
        }
        else {
          uVar6 = (uVar6 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc | (pbVar12[2] & 0x3f) << 6 |
                  pbVar12[3] & 0x3f;
          pppppppuVar11 = (undefined8 *******)0x4;
        }
      }
      else {
LAB_100630a60:
        pppppppuVar11 = (undefined8 *******)0x1;
      }
    }
    else {
      lVar9 = lVar16 << 0x10;
      pppppppuVar11 = param_1;
      __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                (lVar9,param_1,param_2);
      uVar6 = (uint)lVar9;
    }
    lVar16 = (long)pppppppuVar11 + lVar16;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) goto LAB_100630b14;
    if ((long)uVar4 <= lVar16) {
      _swift_bridgeObjectRelease(param_2);
      if (bVar5) {
        return local_78;
      }
      goto LAB_100630c18;
    }
  } while( true );
LAB_100630b5c:
  uVar8 = *(ulong *)(local_78 + 0x10);
  if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar8) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_78 + 0x18));
    FUN_1006295a0(puVar10,uVar8 + 1,1,local_78);
    local_78 = puVar10;
  }
  lVar13 = 0;
  *(ulong *)(local_78 + 0x10) = uVar8 + 1;
  local_78[uVar8 + 0x20] = bVar1 | (byte)(iVar15 << 4);
  if ((long)uVar4 <= lVar16) {
    _swift_bridgeObjectRelease(param_2);
    return local_78;
  }
  goto LAB_1006309f0;
LAB_100630b14:
  if ((0x2f < uVar6) && (uVar6 < 0x67)) {
    if (uVar6 < 0x3a) {
      iVar2 = uVar6 + 0xd0;
      bVar1 = (byte)iVar2;
    }
    else if (uVar6 - 0x47 < 0xfffffffa) {
      if (uVar6 < 0x61) goto LAB_100630bbc;
      iVar2 = uVar6 + 0xa9;
      bVar1 = (byte)iVar2;
    }
    else {
      iVar2 = uVar6 + 0xc9;
      bVar1 = (byte)iVar2;
    }
    if (!bVar5) goto LAB_100630b5c;
    uVar14 = (undefined1)iVar2;
    bVar5 = false;
    lVar13 = 0;
    iVar15 = iVar2;
    if ((long)uVar4 <= lVar16) {
      _swift_bridgeObjectRelease(param_2);
LAB_100630c18:
      uVar4 = *(ulong *)(local_78 + 0x10);
      puVar10 = local_78;
      if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar4) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_78 + 0x18));
        FUN_1006295a0(puVar10,uVar4 + 1,1,local_78);
      }
      *(ulong *)(puVar10 + 0x10) = uVar4 + 1;
      puVar10[uVar4 + 0x20] = uVar14;
      return puVar10;
    }
    goto LAB_100630a18;
  }
LAB_100630bbc:
  _swift_bridgeObjectRelease(local_78);
  _swift_bridgeObjectRelease(param_2);
  return PTR___swiftEmptyArrayStorage_100995ea0;
}

