// rea decompile_all
// name: FUN_1002e2ee0
// address: 0x1002e2ee0
// body: available
// range: 0x1002e2ee0-0x1002e3253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002e318c) */
/* WARNING: Removing unreachable block (ram,0x0001002e30f8) */

void FUN_1002e2ee0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_110 [16];
  long alStack_100 [4];
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  undefined1 local_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  puVar3 = &DAT_100a82c30;
  local_d8 = param_1;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar5 = (long)&local_e0 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d0 = lVar5;
  __s10Foundation3URLVMa();
  local_90 = *(long *)(lVar4 + -8);
  uVar8 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = lVar5 - uVar8;
  lVar13 = local_a8 - uVar8;
  lVar5 = 0;
  lStack_a0 = lVar4;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = lVar13 - uVar8;
  lVar9 = local_b0 - uVar8;
  local_c8 = lVar5;
  FUN_1000b142c();
  local_c0 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  local_b8 = *(long *)(unaff_x20 + *(int *)(param_2 + 0x30));
  local_98 = param_2;
  FUN_10003f030(local_88,local_70);
  pcVar12 = *(code **)(lStack_68 + 8);
  _swift_bridgeObjectRetain(uVar6);
  (*pcVar12)(lVar13,local_70,lStack_68);
  lVar7 = lStack_a0;
  lVar5 = local_a8;
  lVar4 = local_c8;
  if (unaff_x21 == 0) {
    local_e0 = lVar9;
    (**(code **)(local_90 + 0x10))(local_a8,lVar13,lStack_a0);
    lVar1 = local_b0;
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (local_b0,0x404e000000000000,lVar5,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(local_c0,uVar6);
    if (local_b8 != 0) {
      FUN_1002bc258();
    }
    lVar2 = local_98;
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs();
    (**(code **)(local_90 + 8))(lVar13,lVar7);
    lVar5 = local_e0;
    pcVar11 = *(code **)(lVar10 + 0x20);
    (*pcVar11)(local_e0,lVar1,lVar4);
    FUN_10003f094(local_88);
    pcVar12 = *(code **)(unaff_x20 + *(int *)(lVar2 + 0x34));
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(lVar5);
    }
    uVar14 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar9 + -0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar9 + -0x20) = uVar14;
    *(long *)(lVar9 + -0x10) = unaff_x20;
    *(long *)(lVar9 + -8) = lVar5;
    uVar6 = 0;
    __sSqMa(0,uVar14);
    puVar3 = &DAT_100a82488;
    FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
    lVar5 = local_d0;
    FUN_1002dfc78(local_d0,FUN_1002f0ab0,lVar9 + -0x30,uVar6,puVar3,lVar4,PTR___ss5ErrorWS_100995c48
                  ,local_88);
    pcVar12 = *(code **)(lVar10 + 0x30);
    lVar7 = lVar5;
    (*pcVar12)(lVar5,1,lVar4);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar10 + 0x10))(local_d8,local_e0,lVar4);
      lVar7 = lVar5;
      (*pcVar12)(lVar5,1,lVar4);
      if ((int)lVar7 != 1) {
        FUN_100040bb4(lVar5,&DAT_100a82c30,&DAT_1008171f0);
      }
    }
    else {
      (*pcVar11)(local_d8,lVar5,lVar4);
    }
    (**(code **)(lVar10 + 8))(local_e0,lVar4);
  }
  else {
    _swift_bridgeObjectRelease(uVar6);
    FUN_10003f094(local_88);
  }
  return;
}

