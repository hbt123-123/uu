// rea decompile_all
// name: FUN_100063088
// address: 0x100063088
// body: available
// range: 0x100063088-0x100063523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063088(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long local_70 [2];
  
  lVar1 = 0;
  local_f8 = param_8;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,PTR___sSTTL_1000f0350,PTR___s7ElementSTTl_1000f02a8);
  lVar17 = *(long *)(lVar1 + -8);
  local_108 = (long)&local_110 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_100 = *(long *)(param_5 + -8);
  uVar7 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = local_108 - uVar7;
  lVar8 = lVar13 - uVar7;
  lVar2 = 0;
  local_f0 = param_5;
  __sSqMa(0,lVar1);
  local_e8 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = lVar8 - uVar7;
  lVar16 = local_d8 - uVar7;
  uVar7 = *(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110 = lVar16 - uVar7;
  lVar14 = local_110 - uVar7;
  lVar9 = *(long *)(param_3 + -8);
  lVar10 = lVar14 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_e0 = lVar2;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,PTR___sSTTL_1000f0350,PTR___s8IteratorSTTl_1000f02b8);
  local_d0 = *(long *)(lVar3 + -8);
  lVar15 = lVar10 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_3;
  __sST19underestimatedCountSivgTj(param_3,param_6);
  lVar4 = param_4;
  __ss15ContiguousArrayVAByxGycfC();
  uVar5 = 0;
  __ss15ContiguousArrayVMa(0,param_4);
  __ss15ContiguousArrayV15reserveCapacityyySiF(lVar2);
  (**(code **)(lVar9 + 0x10))(lVar10,unaff_x20,param_3);
  __sST12makeIterator0B0QzyFTj(lVar15,param_3);
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100063520);
    (*pcVar11)();
  }
  if (lVar2 == 0) {
    _swift_getAssociatedConformanceWitness
              (param_6,param_3,lVar3,PTR___sSTTL_1000f0350,PTR___sST8IteratorST_StTn_1000f0348);
  }
  else {
    _swift_getAssociatedConformanceWitness
              (param_6,param_3,lVar3,PTR___sSTTL_1000f0350,PTR___sST8IteratorST_StTn_1000f0348);
    do {
      __sSt4next7ElementQzSgyFTj(lVar16,lVar3,param_6);
      lVar9 = lVar16;
      (**(code **)(lVar17 + 0x30))(lVar16,1,lVar1);
      if ((int)lVar9 == 1) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100063524);
        (*pcVar11)();
      }
      (*param_1)(lVar14,lVar16,lVar8);
      if (unaff_x21 != 0) {
        (**(code **)(local_d0 + 8))(lVar15,lVar3);
        _swift_release(lVar4);
        (**(code **)(local_100 + 0x20))(local_f8,lVar8,local_f0);
        (**(code **)(lVar17 + 8))(lVar16,lVar1);
        return;
      }
      (**(code **)(lVar17 + 8))(lVar16,lVar1);
      __ss15ContiguousArrayV6appendyyxnF(lVar14,uVar5);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar9 = local_d8;
  __sSt4next7ElementQzSgyFTj(local_d8,lVar3,param_6);
  pcVar11 = *(code **)(lVar17 + 0x30);
  lVar10 = lVar9;
  (*pcVar11)(lVar9,1,lVar1);
  lVar8 = local_108;
  lVar2 = local_110;
  if ((int)lVar10 != 1) {
    pcVar12 = *(code **)(lVar17 + 0x20);
    do {
      (*pcVar12)(lVar8,lVar9,lVar1);
      (*param_1)(lVar2,lVar8,lVar13);
      if (unaff_x21 != 0) {
        (**(code **)(lVar17 + 8))(lVar8,lVar1);
        (**(code **)(local_d0 + 8))(lVar15,lVar3);
        _swift_release(lVar4);
        (**(code **)(local_100 + 0x20))(local_f8,lVar13,local_f0);
        return;
      }
      (**(code **)(lVar17 + 8))(lVar8,lVar1);
      __ss15ContiguousArrayV6appendyyxnF(lVar2,uVar5);
      __sSt4next7ElementQzSgyFTj(lVar9,lVar3,param_6);
      lVar10 = lVar9;
      (*pcVar11)(lVar9,1,lVar1);
    } while ((int)lVar10 != 1);
  }
  (**(code **)(local_d0 + 8))(lVar15,lVar3);
  (**(code **)(local_e8 + 8))(lVar9,lStack_e0);
  puVar6 = PTR___ss15ContiguousArrayVyxGSTsMc_1000f04e0;
  local_70[0] = lVar4;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSTsMc_1000f04e0,uVar5);
  __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(local_70,param_4,uVar5,puVar6);
  return;
}

