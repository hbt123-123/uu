// rea decompile_all
// name: FUN_100512298
// address: 0x100512298
// body: available
// range: 0x100512298-0x100512423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100512298(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar4,uVar1,0x100900ffc,&TargetProtocolRequirement_10090100c);
  lVar7 = *(long *)(lVar2 + -8);
  puVar8 = &stack0xffffffffffffff80 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar11 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)puVar8 - uVar5;
  lVar9 = lVar10 - uVar5;
  (**(code **)(lVar7 + 0x38))(lVar9,1,1,lVar2);
  (**(code **)(lVar4 + 0x20))(lVar9,param_1,param_3,param_4,uVar1,lVar4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar11 + 0x20))(lVar10,lVar9,lVar3);
    lVar4 = lVar10;
    (**(code **)(lVar7 + 0x30))(lVar10,1,lVar2);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar7 + 0x20))(puVar8,lVar10,lVar2);
      (**(code **)(lVar7 + 0x28))(unaff_x20,puVar8,lVar2);
      return;
    }
    pcVar6 = *(code **)(lVar11 + 8);
  }
  else {
    pcVar6 = *(code **)(lVar11 + 8);
    lVar10 = lVar9;
  }
  (*pcVar6)(lVar10,lVar3);
  return;
}

