// rea decompile_all
// name: FUN_10061b124
// address: 0x10061b124
// body: available
// range: 0x10061b124-0x10061b3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061b124(ulong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  code *pcVar14;
  undefined8 *puVar15;
  
  uVar11 = *(undefined8 *)(param_7 + 8);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  puVar1 = PTR___sSTTL_100995860;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,uVar2,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  puVar13 = &stack0xffffffffffffff80 +
            -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  _swift_checkMetadataState(0,uVar2);
  lVar10 = *(long *)(lVar4 + -8);
  lVar9 = (long)puVar13 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar11,lVar4,puVar1,PTR___s8IteratorSTTl_100995710);
  lVar8 = *(long *)(lVar5 + -8);
  puVar15 = (undefined8 *)(lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar10 + 0x10))(lVar9,param_2,lVar4);
  __sST12makeIterator0B0QzyFTj(puVar15,lVar4,uVar11);
  _swift_getAssociatedConformanceWitness
            (uVar11,lVar4,lVar5,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
  __sSt4next7ElementQzSgyFTj(puVar13,lVar5,uVar11);
  lVar4 = *(long *)(lVar3 + -8);
  pcVar12 = *(code **)(lVar4 + 0x30);
  puVar6 = puVar13;
  (*pcVar12)(puVar13,1,lVar3);
  if ((int)puVar6 != 1) {
    pcVar14 = *(code **)(lVar4 + 0x20);
    do {
      (*pcVar14)(param_1,puVar13,lVar3);
      uVar7 = param_1;
      (*param_3)();
      if ((uVar7 & 1) != 0) {
        (**(code **)(lVar8 + 8))(puVar15,lVar5);
        return;
      }
      (**(code **)(lVar4 + 8))(param_1,lVar3);
      __sSt4next7ElementQzSgyFTj(puVar13,lVar5,uVar11);
      puVar6 = puVar13;
      (*pcVar12)(puVar13,1,lVar3);
    } while ((int)puVar6 != 1);
  }
  (**(code **)(lVar8 + 8))(puVar15,lVar5);
  FUN_10060d02c();
  _swift_allocError(&DAT_1009df040,puVar15,0,0);
  *puVar15 = 4;
  puVar15[2] = 0;
  puVar15[1] = 0;
  puVar15[4] = 0;
  puVar15[3] = 0;
  *(undefined1 *)(puVar15 + 5) = 2;
  _swift_willThrow();
  return;
}

