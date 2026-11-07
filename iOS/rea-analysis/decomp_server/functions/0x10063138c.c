// rea decompile_all
// name: FUN_10063138c
// address: 0x10063138c
// body: available
// range: 0x10063138c-0x1006315bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063138c(undefined8 param_1,long param_2)

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
  code *pcVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar4 = PTR___sSlTL_1009959e8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0xff;
  local_78 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar6,"lower upper ",0);
  local_80 = *(long *)(lVar7 + -8);
  uVar10 = *(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = auStack_a0 + -uVar10;
  lVar16 = (long)puVar15 - uVar10;
  local_88 = *(long *)(lVar6 + -8);
  uVar11 = *(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar16 - uVar11;
  uVar11 = lVar14 - uVar11;
  uVar8 = uVar2;
  _swift_getAssociatedConformanceWitness(uVar2,uVar1,lVar6,puVar4,PTR___sSl5IndexSl_SLTn_1009959e0);
  lVar9 = 0;
  __sSnMa(0,lVar6,uVar8);
  local_90 = uVar11 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar9;
  __sSl8endIndex0B0QzvgTj(uVar11,uVar1,uVar2);
  local_70 = uVar1;
  local_68 = uVar2;
  __sSl8endIndex0B0QzvgTj(lVar14,uVar1,uVar2);
  uVar10 = uVar11;
  __sSL2leoiySbx_xtFZTj(uVar11,lVar14,lVar6,uVar8);
  lVar9 = local_88;
  if ((uVar10 & 1) != 0) {
    pcVar12 = *(code **)(local_88 + 0x20);
    (*pcVar12)(lVar16,uVar11,lVar6);
    (*pcVar12)(lVar16 + *(int *)(lVar7 + 0x30),lVar14,lVar6);
    lVar5 = local_80;
    (**(code **)(local_80 + 0x10))(puVar15,lVar16,lVar7);
    lVar14 = local_90;
    iVar3 = *(int *)(lVar7 + 0x30);
    (*pcVar12)(local_90,puVar15,lVar6);
    pcVar13 = *(code **)(lVar9 + 8);
    (*pcVar13)(puVar15 + iVar3,lVar6);
    (**(code **)(lVar5 + 0x20))(puVar15,lVar16,lVar7);
    (*pcVar12)(lVar14 + *(int *)(local_98 + 0x24),puVar15 + *(int *)(lVar7 + 0x30),lVar6);
    (*pcVar13)(puVar15,lVar6);
    FUN_100631064(local_78,lVar14,local_70,local_68);
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1006315c0);
  (*pcVar12)();
}

