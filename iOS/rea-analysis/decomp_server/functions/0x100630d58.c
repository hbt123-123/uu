// rea decompile_all
// name: FUN_100630d58
// address: 0x100630d58
// body: available
// range: 0x100630d58-0x100630fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100630d58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  code *pcVar16;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  puVar4 = PTR___sSlTL_1009959e8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0xff;
  local_88 = param_1;
  local_68 = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar6,"lower upper ",0);
  local_90 = *(long *)(lVar7 + -8);
  uVar10 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = auStack_b0 + -uVar10;
  local_98 = (long)puVar15 - uVar10;
  local_70 = *(long *)(lVar6 + -8);
  uVar11 = *(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = local_98 - uVar11;
  lVar14 = lVar13 - uVar11;
  uVar11 = lVar14 - uVar11;
  uVar8 = uVar2;
  _swift_getAssociatedConformanceWitness(uVar2,uVar1,lVar6,puVar4,PTR___sSl5IndexSl_SLTn_1009959e0);
  lVar9 = 0;
  __sSnMa(0,lVar6,uVar8);
  local_a0 = uVar11 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar9;
  __sSl10startIndex0B0QzvgTj(uVar11,uVar1,uVar2);
  lVar5 = local_70;
  local_80 = uVar1;
  local_78 = uVar2;
  __sSl10startIndex0B0QzvgTj(lVar13,uVar1,uVar2);
  FUN_100631214(lVar14,lVar13,local_68);
  pcVar16 = *(code **)(lVar5 + 8);
  (*pcVar16)(lVar13,lVar6);
  uVar10 = uVar11;
  __sSL2leoiySbx_xtFZTj(uVar11,lVar14,lVar6,uVar8);
  lVar9 = local_98;
  if ((uVar10 & 1) != 0) {
    pcVar12 = *(code **)(lVar5 + 0x20);
    (*pcVar12)(local_98,uVar11,lVar6);
    (*pcVar12)(lVar9 + *(int *)(lVar7 + 0x30),lVar14,lVar6);
    lVar13 = local_90;
    (**(code **)(local_90 + 0x10))(puVar15,lVar9,lVar7);
    lVar5 = local_a0;
    iVar3 = *(int *)(lVar7 + 0x30);
    (*pcVar12)(local_a0,puVar15,lVar6);
    (*pcVar16)(puVar15 + iVar3,lVar6);
    (**(code **)(lVar13 + 0x20))(puVar15,lVar9,lVar7);
    (*pcVar12)(lVar5 + *(int *)(local_a8 + 0x24),puVar15 + *(int *)(lVar7 + 0x30),lVar6);
    (*pcVar16)(puVar15,lVar6);
    FUN_100631064(local_88,lVar5,local_80,local_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x100630fc0);
  (*pcVar16)();
}

