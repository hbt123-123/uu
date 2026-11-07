// rea decompile_all
// name: FUN_100070cdc
// address: 0x100070cdc
// body: available
// range: 0x100070cdc-0x100070eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100070cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  long lStack_90;
  
  lVar1 = 0;
  __sSqMa(0,param_4);
  local_98 = *(long *)(lVar1 + -8);
  puVar6 = auStack_a0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  lStack_90 = lVar1;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar9 = *(long *)(lVar3 + -8);
  lVar11 = (long)puVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar11 - uVar7;
  lVar8 = lVar10 - uVar7;
  (**(code **)(param_7 + 8))(lVar11,param_2,param_3,lVar2,param_7);
  lVar1 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar3);
    lVar1 = *(long *)(param_4 + -8);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar8,lVar11,lVar2);
    (**(code **)(lVar12 + 0x10))(lVar10,lVar8,lVar2);
    __sSY8rawValuexSg03RawB0Qz_tcfCTj(puVar6,lVar10,param_4,param_6);
    (**(code **)(lVar12 + 8))(lVar8,lVar2);
    lVar1 = *(long *)(param_4 + -8);
    puVar4 = puVar6;
    (**(code **)(lVar1 + 0x30))(puVar6,1,param_4);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar1 + 0x20))(param_1,puVar6,param_4);
      uVar5 = 0;
      goto LAB_100070e98;
    }
    (**(code **)(local_98 + 8))(puVar6,lStack_90);
  }
  uVar5 = 1;
LAB_100070e98:
  (**(code **)(lVar1 + 0x38))(param_1,uVar5,1,param_4);
  return;
}

