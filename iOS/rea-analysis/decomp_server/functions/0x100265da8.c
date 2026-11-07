// rea decompile_all
// name: FUN_100265da8
// address: 0x100265da8
// body: available
// range: 0x100265da8-0x1002661eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010026603c) */

void FUN_100265da8(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long local_110 [4];
  ulong local_f0;
  long local_e8;
  undefined8 *local_e0;
  ulong local_d8;
  ulong local_d0;
  long local_c8;
  long local_c0;
  undefined1 auStack_b0 [80];
  
  puVar6 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar16 = (long)local_110 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  local_c0 = *(long *)(lVar7 + -8);
  uVar12 = lVar16 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_f0 = uVar12;
  __s10Foundation3URLVMa();
  local_110[2] = *(long *)(lVar8 + -8);
  lVar13 = uVar12 - (*(long *)(local_110[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  local_110[1] = lVar13;
  local_110[3] = lVar8;
  FUN_100275594();
  puVar18 = (undefined8 *)
            (lVar13 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar8 = param_2 + 0x40;
  uVar12 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar15 = param_1 + 1 & (uVar12 ^ 0xffffffffffffffff);
  local_c8 = lVar9;
  if ((*(ulong *)(lVar8 + (uVar15 >> 3 & 0xffffffffffffff8)) >> (uVar15 & 0x3f) & 1) != 0) {
    uVar12 = ~uVar12;
    uVar10 = param_1;
    local_d0 = uVar12;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar8,uVar12);
    local_d8 = uVar10 + 1 & uVar12;
    local_110[0] = lVar8;
    local_e8 = lVar7;
    local_e0 = puVar18;
    do {
      lVar17 = *(long *)(*(long *)(param_2 + 0x30) + uVar15 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(param_2 + 0x28));
      FUN_1002663d4(lVar17 + _TtC4Moya8Endpoint::task,puVar18);
      puVar11 = puVar18;
      _swift_getEnumCaseMultiPayload(puVar18,local_c8);
      lVar3 = local_110[3];
      lVar13 = local_110[2];
      lVar9 = local_110[1];
      iVar5 = (int)puVar11;
      if (iVar5 == 8) {
        uVar14 = *puVar18;
        uVar2 = puVar18[1];
        _swift_retain(lVar17);
        lVar7 = local_e8;
        _swift_bridgeObjectRelease(uVar2);
LAB_100266004:
        FUN_1002632d8(auStack_b0,uVar14);
        _swift_bridgeObjectRelease(uVar14);
      }
      else {
        if (iVar5 == 7) {
          uVar14 = *puVar18;
          _swift_retain(lVar17);
          goto LAB_100266004;
        }
        if (iVar5 == 6) {
          (**(code **)(local_110[2] + 0x20))(local_110[1],puVar18,local_110[3]);
          puVar6 = &DAT_100a81028;
          FUN_100005c90(&DAT_100a81028,PTR___s10Foundation3URLVMa_100996188,
                        PTR___s10Foundation3URLVSHAAMc_1009961a0);
          _swift_retain(lVar17);
          lVar7 = local_e8;
          __sSH4hash4intoys6HasherVz_tFTj(auStack_b0,lVar3,puVar6);
          lVar8 = local_110[0];
          (**(code **)(lVar13 + 8))(lVar9,lVar3);
        }
        else {
          _swift_retain(lVar17);
          FUN_100266418(puVar18);
        }
      }
      FUN_10026162c(lVar16);
      lVar9 = local_c0;
      (**(code **)(local_c0 + 0x38))(lVar16,0,1,lVar7);
      uVar12 = local_f0;
      (**(code **)(lVar9 + 0x20))(local_f0,lVar16,lVar7);
      puVar6 = &DAT_100a81020;
      FUN_100005c90(&DAT_100a81020,PTR___s10Foundation10URLRequestVMa_1009960c0,
                    PTR___s10Foundation10URLRequestVSHAAMc_1009960d0);
      __sSH4hash4intoys6HasherVz_tFTj(auStack_b0,lVar7,puVar6);
      puVar18 = local_e0;
      (**(code **)(lVar9 + 8))(uVar12,lVar7);
      __ss6HasherV9_finalizeSiyF();
      _swift_release(lVar17);
      uVar12 = uVar12 & local_d0;
      if ((long)param_1 < (long)local_d8) {
        if (uVar12 < local_d8) {
LAB_100266138:
          if ((long)param_1 < (long)uVar12) goto LAB_100265ef0;
        }
        puVar11 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar15 * 8);
        if ((param_1 != uVar15) || (puVar1 + 1 <= puVar11)) {
          *puVar11 = *puVar1;
        }
        puVar11 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar15 * 8);
        if ((param_1 != uVar15) || (puVar1 + 1 <= puVar11)) {
          *puVar11 = *puVar1;
          param_1 = uVar15;
        }
      }
      else if (local_d8 <= uVar12) goto LAB_100266138;
LAB_100265ef0:
      uVar15 = uVar15 + 1 & local_d0;
    } while ((*(ulong *)(lVar8 + (uVar15 >> 3 & 0xffffffffffffff8)) >> (uVar15 & 0x3f) & 1) != 0);
  }
  uVar12 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar8 + uVar12) = *(ulong *)(lVar8 + uVar12) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002661ec);
  (*pcVar4)();
}

