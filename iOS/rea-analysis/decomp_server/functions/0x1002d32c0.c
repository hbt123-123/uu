// rea decompile_all
// name: FUN_1002d32c0
// address: 0x1002d32c0
// body: available
// range: 0x1002d32c0-0x1002d3837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002d3824) */

undefined1  [16] FUN_1002d32c0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ID self;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_e0 [8];
  code *local_d8;
  long local_d0;
  long local_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  puVar5 = auStack_e0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar7 = (long)puVar5 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_d0 = lVar7;
  FUN_1002c76a8();
  uVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  lVar10 = lVar7 - uVar8;
  puVar1 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar8 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar10 - uVar8;
  lVar16 = lVar17 - uVar8;
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar9 = lVar16 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar13 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar14 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar14);
  lVar12 = *(long *)(*plVar13 + 0x60);
  _swift_beginAccess((long)plVar13 + lVar12,auStack_78,0,0);
  FUN_100082394((long)plVar13 + lVar12,lVar10,FUN_1002c76a8);
  FUN_1002cda90(&local_90,lVar10);
  FUN_1000d27dc(lVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar14);
  if (*(long *)(local_90 + 0x10) == 0) {
    _swift_bridgeObjectRelease(local_90);
    local_d8 = *(code **)(lVar15 + 0x38);
    (*local_d8)(lVar17,1,1,lVar3);
    uVar14 = *(undefined8 *)(plVar13[2] + 0x10);
    _os_unfair_lock_lock(uVar14);
    FUN_100082394((long)plVar13 + lVar12,lVar7,FUN_1002c76a8);
    lVar10 = *(long *)(lVar7 + 0x148);
    _swift_bridgeObjectRetain(lVar10);
    FUN_1000d27dc(lVar7,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar14);
    lVar7 = *(long *)(lVar10 + 0x10);
    if (lVar7 != 0) {
      (**(code **)(lVar15 + 0x10))
                (lVar16,lVar10 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar15 + 0x48) * (lVar7 + -1),lVar3);
    }
    _swift_bridgeObjectRelease(lVar10);
    (*local_d8)(lVar16,lVar7 == 0,1,lVar3);
    pcVar11 = *(code **)(lVar15 + 0x30);
    lVar7 = lVar17;
    (*pcVar11)(lVar17,1,lVar3);
    if ((int)lVar7 != 1) {
      FUN_100040bb4(lVar17,&DAT_100a82c30,&DAT_1008171f0);
    }
  }
  else {
    (**(code **)(lVar15 + 0x10))
              (lVar17,local_90 +
                      ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar15 + 0x48) * (*(long *)(local_90 + 0x10) + -1),lVar3);
    _swift_bridgeObjectRelease(local_90);
    pcVar11 = *(code **)(lVar15 + 0x38);
    (*pcVar11)(lVar17,0,1,lVar3);
    (**(code **)(lVar15 + 0x20))(lVar16,lVar17,lVar3);
    (*pcVar11)(lVar16,0,1,lVar3);
    pcVar11 = *(code **)(lVar15 + 0x30);
  }
  lVar7 = lVar16;
  (*pcVar11)(lVar16,1,lVar3);
  if ((int)lVar7 == 1) {
    FUN_100040bb4(lVar16,&DAT_100a82c30,&DAT_1008171f0);
  }
  else {
    (**(code **)(lVar15 + 0x20))(lVar9,lVar16,lVar3);
    __s10Foundation10URLRequestV3urlAA3URLVSgvg(puVar5);
    puVar4 = puVar5;
    (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
    lVar7 = local_d0;
    if ((int)puVar4 == 1) {
      (**(code **)(lVar15 + 8))(lVar9,lVar3);
      FUN_100040bb4(puVar5,&DAT_100a83428,&DAT_100817bb0);
    }
    else {
      lVar10 = local_d0;
      (**(code **)(lVar6 + 0x20))(local_d0,puVar5,lVar2);
      __s10Foundation10URLRequestV10httpMethodSSSgvg();
      if (puVar5 != (undefined1 *)0x0) {
        self = 0xe100000000000000;
        local_90 = lVar10;
        puStack_88 = puVar5;
        __sSS6appendyySSF(0x20);
        __s10Foundation3URLV14absoluteStringSSvg();
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease();
        puVar5 = puStack_88;
        lVar10 = local_90;
        FUN_1002c85ec();
        if (self == 0) {
          (**(code **)(lVar6 + 8))(lVar7,lVar2);
          (**(code **)(lVar15 + 8))(lVar9,lVar3);
        }
        else {
          local_90 = lVar10;
          puStack_88 = puVar5;
          _swift_bridgeObjectRetain(puVar5);
          __sSS6appendyySSF(0x2820,0xe200000000000000);
          _objc_msgSend(self,"statusCode");
          puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(puVar1);
          __sSS6appendyySSF(0x29,0xe100000000000000);
          puVar4 = puStack_88;
          lVar10 = local_90;
          (**(code **)(lVar6 + 8))(lVar7,lVar2);
          (**(code **)(lVar15 + 8))(lVar9,lVar3);
          _swift_bridgeObjectRelease(puVar5);
          puVar5 = puVar4;
        }
        goto LAB_1002d37d8;
      }
      (**(code **)(lVar6 + 8))(lVar7,lVar2);
      (**(code **)(lVar15 + 8))(lVar9,lVar3);
    }
  }
  lVar10 = -0x2fffffffffffffe9;
  puVar5 = (undefined1 *)0x80000001008a9d60;
LAB_1002d37d8:
  auVar18._8_8_ = puVar5;
  auVar18._0_8_ = lVar10;
  return auVar18;
}

