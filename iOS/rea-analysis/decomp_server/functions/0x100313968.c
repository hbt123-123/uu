// rea decompile_all
// name: FUN_100313968
// address: 0x100313968
// body: available
// range: 0x100313968-0x100313e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100313968(long param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  code *pcVar12;
  long *unaff_x20;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auStack_140 [16];
  long alStack_130 [2];
  undefined1 auStack_120 [8];
  long local_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  long local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined1 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_98;
  char local_90;
  undefined1 auStack_80 [32];
  
  local_c0 = *(undefined8 *)(*unaff_x20 + 0x50);
  local_b8 = *(long *)(*unaff_x20 + 0x58);
  lVar1 = 0xff;
  local_100 = param_2;
  local_c8 = param_3;
  _swift_getAssociatedTypeWitness();
  lVar2 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar1,PTR___sSiN_100995968,0,0);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  local_f8 = *(long *)(lVar3 + -8);
  puStack_d0 = auStack_120 + -(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(lVar1 + -8);
  uVar11 = (long)puStack_d0 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_f0 = uVar11;
  local_e0 = lVar1;
  local_d8 = lVar3;
  FUN_1002c76a8();
  lVar3 = uVar11 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar1 + -8);
  uVar11 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar3 - uVar11;
  uVar11 = lVar16 - uVar11;
  plVar14 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar17 = *(undefined8 *)(plVar14[2] + 0x10);
  _os_unfair_lock_lock(uVar17);
  lVar4 = *(long *)(*plVar14 + 0x60);
  _swift_beginAccess((long)plVar14 + lVar4,auStack_80,0,0);
  FUN_10028ab0c((long)plVar14 + lVar4,lVar3);
  lVar4 = *(long *)(lVar3 + 0x148);
  _swift_bridgeObjectRetain(lVar4);
  FUN_100315098(lVar3);
  _os_unfair_lock_unlock(uVar17);
  if (*(long *)(lVar4 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar4);
  }
  else {
    (**(code **)(lVar15 + 0x10))
              (lVar16,lVar4 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar15 + 0x48) * (*(long *)(lVar4 + 0x10) + -1),lVar1);
    _swift_bridgeObjectRelease(lVar4);
    uVar5 = uVar11;
    (**(code **)(lVar15 + 0x20))(uVar11,lVar16,lVar1);
    FUN_1002c85ec();
    lVar3 = local_b8;
    uVar17 = local_c0;
    if (uVar5 != 0) {
      lVar4 = unaff_x20[2];
      uVar6 = uVar11;
      (**(code **)(local_b8 + 0x28))(uVar11,uVar5,local_c8,local_c0,local_b8);
      if ((uVar6 & 1) == 0) {
        (*param_4)(1,2);
        pcVar12 = *(code **)(lVar15 + 8);
      }
      else {
        lVar13 = unaff_x20[4];
        local_110 = lVar4;
        local_108 = uVar11;
        local_c8 = lVar1;
        *(undefined8 *)(uVar11 - 0x10) = uVar17;
        *(long *)(uVar11 - 8) = lVar3;
        puVar8 = puStack_d0;
        lVar16 = local_d8;
        local_118 = lVar13;
        FUN_1002c6bac(puStack_d0,FUN_1003150d4,uVar11 - 0x20,local_d8);
        uVar5 = local_108;
        puVar7 = puVar8;
        (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar8,1,lVar2);
        lVar1 = local_e0;
        lVar4 = local_e8;
        uVar6 = local_f0;
        if ((int)puVar7 == 1) {
          (**(code **)(local_f8 + 8))(puVar8,lVar16);
          FUN_100315010();
          puVar10 = &DAT_1009b01b8;
          _swift_allocError(&DAT_1009b01b8,puVar8,0,0);
          *puVar8 = 0;
          (*param_4)();
          _swift_errorRelease(puVar10);
          pcVar12 = *(code **)(lVar15 + 8);
          lVar1 = local_c8;
        }
        else {
          local_d8 = 0;
          local_f8 = *(long *)(puVar8 + *(int *)(lVar2 + 0x30));
          (**(code **)(local_e8 + 0x20))(local_f0,puVar8,local_e0);
          uVar9 = uVar11;
          (**(code **)(lVar3 + 0x30))(uVar11,uVar6,uVar17,lVar3);
          lVar2 = local_c8;
          uVar17 = local_100;
          if ((uVar9 & 1) == 0) {
            (*param_4)(0,2);
            (**(code **)(lVar15 + 8))(uVar11,lVar2);
            pcVar12 = *(code **)(lVar4 + 8);
            uVar11 = uVar6;
          }
          else {
            *(long *)(uVar5 - 0x30) = local_f8;
            *(code **)(uVar5 - 0x28) = param_4;
            *(undefined8 *)(uVar5 - 0x20) = param_5;
            *(long **)(uVar5 - 0x18) = unaff_x20;
            *(ulong *)(uVar5 - 0x10) = uVar6;
            *(undefined8 *)(uVar5 - 8) = uVar17;
            puVar10 = &DAT_100a855b0;
            FUN_100004bb4(&DAT_100a855b0,&DAT_100819968);
            FUN_1002c6c70(&local_98,FUN_1003150ec,uVar5 - 0x40,puVar10);
            if (local_90 == -1) {
              (**(code **)(lVar15 + 8))(uVar11,lVar2);
            }
            else {
              (*param_4)(local_98,local_90);
              FUN_10031510c(local_98,local_90);
              (**(code **)(lVar15 + 8))(uVar11,lVar2);
            }
            pcVar12 = *(code **)(local_e8 + 8);
            uVar11 = local_f0;
            lVar1 = local_e0;
          }
        }
      }
      (*pcVar12)(uVar11,lVar1);
      return;
    }
    (**(code **)(lVar15 + 8))(uVar11,lVar1);
  }
  (*param_4)(1,2);
  return;
}

