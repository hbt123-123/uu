// rea decompile_all
// name: FUN_10061b500
// address: 0x10061b500
// body: available
// range: 0x10061b500-0x10061b6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061b500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_80 [32];
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,param_5,uVar1,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8)
  ;
  lVar10 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_80 + -uVar7;
  lVar8 = (long)puVar9 - uVar7;
  puVar3 = (undefined8 *)0x0;
  _swift_checkMetadataState(0,uVar1);
  puVar4 = puVar3;
  __sSl7isEmptySbvgTj();
  if (((ulong)puVar4 & 1) == 0) {
    __sSl8endIndex0B0QzvgTj(puVar9,puVar3,param_5);
    __sSl5index_8offsetBy5IndexQzAD_SitFTj(lVar8,puVar9,0xffffffffffffffff,puVar3,param_5);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(puVar9,lVar2);
    pcVar5 = (code *)auStack_80;
    lVar10 = lVar8;
    __sSly7ElementQz5IndexQzcirTj(pcVar5,lVar8,puVar3,param_5);
    lVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_5 + 8),puVar3,PTR___sSTTL_100995860,
               PTR___s7ElementSTTl_1009956f8);
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,lVar10,lVar6);
    (*pcVar5)(auStack_80,0);
    (*pcVar11)(lVar8,lVar2);
  }
  else {
    FUN_10060d02c();
    _swift_allocError(&DAT_1009df040,puVar4,0,0);
    *puVar4 = 4;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 5) = 2;
    _swift_willThrow();
  }
  return;
}

