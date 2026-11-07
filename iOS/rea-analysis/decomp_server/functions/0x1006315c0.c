// rea decompile_all
// name: FUN_1006315c0
// address: 0x1006315c0
// body: available
// range: 0x1006315c0-0x1006317f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006315c0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar3 = PTR___sSlTL_1009959e8;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0xff;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar1,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,"lower upper ",0);
  local_88 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar13 = auStack_a0 + -uVar8;
  lVar14 = (long)puVar13 - uVar8;
  local_90 = *(long *)(lVar4 + -8);
  lVar11 = lVar14 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = uVar1;
  local_70 = uVar6;
  _swift_getAssociatedConformanceWitness(uVar6,uVar1,lVar4,puVar3,PTR___sSl5IndexSl_SLTn_1009959e0);
  lVar7 = 0;
  __sSnMa(0,lVar4,uVar6);
  lVar15 = lVar11 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)*(int *)(lVar7 + 0x24);
  local_98 = lVar7;
  FUN_100631214(lVar11,param_2 + lVar9,param_3);
  uVar8 = param_2 + lVar9;
  __sSL2leoiySbx_xtFZTj(uVar8,lVar11,lVar4,uVar6);
  lVar7 = local_90;
  if ((uVar8 & 1) != 0) {
    (**(code **)(local_90 + 0x10))(lVar14,param_2 + lVar9,lVar4);
    pcVar10 = *(code **)(lVar7 + 0x20);
    (*pcVar10)(lVar14 + *(int *)(lVar5 + 0x30),lVar11,lVar4);
    lVar9 = local_88;
    (**(code **)(local_88 + 0x10))(puVar13,lVar14,lVar5);
    iVar2 = *(int *)(lVar5 + 0x30);
    (*pcVar10)(lVar15,puVar13,lVar4);
    pcVar12 = *(code **)(lVar7 + 8);
    (*pcVar12)(puVar13 + iVar2,lVar4);
    (**(code **)(lVar9 + 0x20))(puVar13,lVar14,lVar5);
    (*pcVar10)(lVar15 + *(int *)(local_98 + 0x24),puVar13 + *(int *)(lVar5 + 0x30),lVar4);
    (*pcVar12)(puVar13,lVar4);
    FUN_100631064(local_80,lVar15,local_78,local_70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1006317f4);
  (*pcVar10)();
}

