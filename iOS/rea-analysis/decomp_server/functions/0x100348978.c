// rea decompile_all
// name: FUN_100348978
// address: 0x100348978
// body: available
// range: 0x100348978-0x100349027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100348978(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ID self;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  long local_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  local_f8 = param_2;
  __s10Foundation8URLErrorV4CodeVMa();
  local_c0 = *(long *)(lVar2 + -8);
  lVar6 = (long)&local_110 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82460;
  local_100 = lVar6;
  local_b8 = lVar2;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar6 = lVar6 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82478;
  local_f0 = lVar6;
  FUN_100004bb4(&DAT_100a82478,&DAT_100816c10);
  uVar7 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = lVar6 - uVar7;
  lVar11 = local_e8 - uVar7;
  puVar3 = &DAT_100a85430;
  FUN_100004bb4(&DAT_100a85430,&DAT_100819888);
  uVar7 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e0 = lVar11 - uVar7;
  local_d8 = local_e0 - uVar7;
  local_d0 = local_d8 - uVar7;
  lVar6 = local_d0 - uVar7;
  lVar2 = 0;
  local_c8 = lVar6;
  FUN_1002c76a8();
  lVar6 = lVar6 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar10 = lVar6 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar12 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar14 = *(undefined8 *)(plVar12[2] + 0x10);
  _os_unfair_lock_lock(uVar14);
  lVar16 = *(long *)(*plVar12 + 0x60);
  _swift_beginAccess((long)plVar12 + lVar16,auStack_80,0,0);
  FUN_10028ab0c((long)plVar12 + lVar16,lVar6);
  uVar7 = *(ulong *)(lVar6 + 0x148);
  _swift_bridgeObjectRetain(uVar7);
  FUN_1000d27dc(lVar6,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar14);
  if (*(long *)(uVar7 + 0x10) == 0) {
    _swift_bridgeObjectRelease(uVar7);
  }
  else {
    self = uVar7 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
           *(long *)(lVar15 + 0x48) * (*(long *)(uVar7 + 0x10) + -1);
    (**(code **)(lVar15 + 0x10))(lVar10,self,lVar2);
    _swift_bridgeObjectRelease();
    __s10Foundation10URLRequestV10httpMethodSSSgvg();
    if (self == 0) {
      (**(code **)(lVar15 + 8))(lVar10,lVar2);
    }
    else {
      (**(code **)(lVar15 + 8))(lVar10,lVar2);
      FUN_100153074(uVar7,self,*(undefined8 *)(unaff_x20 + 0x28));
      _swift_bridgeObjectRelease();
      if ((uVar7 & 1) != 0) {
        FUN_1002c85ec();
        if (self != 0) {
          uVar7 = _objc_msgSend(self,"statusCode");
          FUN_10034316c(uVar7,*(undefined8 *)(unaff_x20 + 0x30));
          if ((uVar7 & 1) != 0) {
            uVar9 = 1;
            goto LAB_100348f98;
          }
        }
        lVar2 = local_f8;
        local_88 = local_f8;
        _swift_errorRetain(local_f8);
        puVar3 = &DAT_100a82488;
        FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
        lVar10 = 0;
        __s10Foundation8URLErrorVMa();
        lVar6 = lVar11;
        local_110 = puVar3;
        _swift_dynamicCast(lVar11,&local_88,puVar3,lVar10,6);
        lVar15 = *(long *)(lVar10 + -8);
        pcVar13 = *(code **)(lVar15 + 0x38);
        bVar1 = (int)lVar6 == 0;
        local_108 = lVar15;
        if (bVar1) {
          (*pcVar13)(lVar11,1,1,lVar10);
          FUN_100040bb4(lVar11,&DAT_100a82478,&DAT_100816c10);
          pcVar8 = *(code **)(local_c0 + 0x38);
          lVar6 = local_c8;
        }
        else {
          lVar16 = lVar11;
          (*pcVar13)(lVar11,0,1,lVar10);
          FUN_100349078();
          lVar6 = local_c8;
          __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(local_c8,lVar10,lVar16);
          (**(code **)(lVar15 + 8))(lVar11,lVar10);
          pcVar8 = *(code **)(local_c0 + 0x38);
        }
        lVar16 = local_b8;
        lVar15 = local_c0;
        (*pcVar8)(lVar6,bVar1,1,local_b8);
        lVar11 = local_e8;
        _swift_getErrorValue(lVar2,auStack_90,local_a8);
        lVar2 = local_f0;
        FUN_100277a34(local_f0,uStack_a0,local_98);
        lVar4 = 0;
        FUN_100277ad0();
        lVar5 = lVar2;
        (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar2,1,lVar4);
        if ((int)lVar5 == 1) {
          FUN_100040bb4(lVar2,&DAT_100a82460,&DAT_1008175c0);
LAB_100348e60:
          (*pcVar13)(lVar11,1,1,lVar10);
LAB_100348e74:
          FUN_100040bb4(lVar11,&DAT_100a82478,&DAT_100816c10);
          uVar14 = 1;
          lVar4 = local_d0;
        }
        else {
          FUN_100278a38();
          FUN_1000d27dc(lVar2,FUN_100277ad0);
          if (lVar5 == 0) goto LAB_100348e60;
          lVar2 = lVar11;
          local_88 = lVar5;
          _swift_dynamicCast(lVar11,&local_88,local_110,lVar10,6);
          (*pcVar13)(lVar11,(uint)lVar2 ^ 1,1,lVar10);
          lVar2 = local_108;
          lVar5 = lVar11;
          (**(code **)(local_108 + 0x30))(lVar11,1,lVar10);
          if ((int)lVar5 == 1) goto LAB_100348e74;
          FUN_100349078();
          lVar4 = local_d0;
          __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(local_d0,lVar10,lVar5);
          (**(code **)(lVar2 + 8))(lVar11,lVar10);
          uVar14 = 0;
        }
        lVar10 = local_d8;
        (*pcVar8)(lVar4,uVar14,1,lVar16);
        lVar2 = local_e0;
        FUN_100349028(lVar6,local_e0);
        pcVar13 = *(code **)(lVar15 + 0x30);
        lVar11 = lVar2;
        (*pcVar13)(lVar2,1,lVar16);
        if ((int)lVar11 == 1) {
          FUN_100349028(lVar4,lVar10);
          lVar11 = lVar2;
          (*pcVar13)(lVar2,1,lVar16);
          if ((int)lVar11 != 1) {
            FUN_100040bb4(lVar2,&DAT_100a85430,&DAT_100819888);
          }
        }
        else {
          (**(code **)(lVar15 + 0x20))(lVar10,lVar2,lVar16);
          (*pcVar8)(lVar10,0,1,lVar16);
        }
        lVar11 = lVar10;
        (*pcVar13)(lVar10,1,lVar16);
        lVar2 = local_100;
        if ((int)lVar11 != 1) {
          (**(code **)(lVar15 + 0x20))(local_100,lVar10,lVar16);
          lVar10 = lVar2;
          FUN_10034320c(lVar2,*(undefined8 *)(unaff_x20 + 0x38));
          uVar9 = (uint)lVar10;
          (**(code **)(lVar15 + 8))(lVar2,lVar16);
          FUN_100040bb4(lVar4,&DAT_100a85430,&DAT_100819888);
          FUN_100040bb4(lVar6,&DAT_100a85430,&DAT_100819888);
          goto LAB_100348f98;
        }
        FUN_100040bb4(lVar4,&DAT_100a85430,&DAT_100819888);
        FUN_100040bb4(lVar6,&DAT_100a85430,&DAT_100819888);
        FUN_100040bb4(lVar10,&DAT_100a85430,&DAT_100819888);
      }
    }
  }
  uVar9 = 0;
LAB_100348f98:
  return uVar9 & 1;
}

