// rea decompile_all
// name: FUN_100651fcc
// address: 0x100651fcc
// body: available
// range: 0x100651fcc-0x10065230f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100651fcc(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  ulong local_78;
  undefined1 *local_70;
  byte local_68;
  
  puVar1 = PTR___sSzTL_100995aa8;
  lVar3 = 0;
  local_78 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,PTR___sSzTL_100995aa8,PTR___s5WordsSzTl_1009956f0);
  puVar11 = auStack_a0 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_3;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar3,puVar1,PTR___sSz5WordsSz_SkTn_100995aa0);
  local_80 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_80,lVar3,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  local_90 = *(long *)(lVar4 + -8);
  local_98 = (long)puVar11 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_2 + -8);
  lVar12 = local_98 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar5 = 0;
  local_88 = lVar4;
  _swift_getAssociatedTypeWitness
            (0,uVar8,param_2,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar4 = lVar12 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = uVar8;
  _swift_getAssociatedConformanceWitness
            (uVar8,param_2,lVar5,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar4,&DAT_10084d4f0,0x100,lVar5,uVar6);
  uVar2 = local_78;
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(lVar12,lVar4,param_2,uVar8);
  uVar7 = uVar2;
  __sSL2geoiySbx_xtFZTj(uVar2,lVar12,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
  pcVar9 = *(code **)(lVar10 + 8);
  (*pcVar9)(lVar12,param_2);
  if ((uVar7 & 1) == 0) {
    (*pcVar9)(uVar2,param_2);
    puVar11 = (undefined1 *)0x0;
  }
  else {
    lVar5 = param_2;
    __sSz8bitWidthSivgTj(param_2,param_3);
    __sSz5words5WordsQzvgTj(puVar11,param_2,param_3);
    uVar6 = local_80;
    lVar4 = local_98;
    if (lVar5 < 0x81) {
      __sST12makeIterator0B0QzyFTj(local_98,lVar3,local_80);
      lVar5 = local_88;
      _swift_getAssociatedConformanceWitness
                (uVar6,lVar3,local_88,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
      __sSt4next7ElementQzSgyFTj(&local_70,lVar5,uVar6);
      puVar11 = (undefined1 *)0x0;
      if (local_68 == 0) {
        puVar11 = local_70;
      }
      __sSt4next7ElementQzSgyFTj(&local_70,lVar5,uVar6);
      __sSt4next7ElementQzSgyFTj(&local_70,lVar5,uVar6);
      (*pcVar9)(uVar2,param_2);
      (**(code **)(local_90 + 8))(lVar4,lVar5);
      if ((local_68 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100652310);
        (*pcVar9)();
      }
    }
    else {
      FUN_100660000(puVar11,lVar3,local_80);
      (*pcVar9)(uVar2,param_2);
    }
  }
  return puVar11;
}

