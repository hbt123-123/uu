// rea decompile_all
// name: FUN_100631214
// address: 0x100631214
// body: available
// range: 0x100631214-0x10063137f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100631214(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long local_70;
  undefined8 local_68;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,PTR___sSlTL_1009959e8,PTR___s5IndexSlTl_1009956e8);
  lVar6 = *(long *)(lVar3 + -8);
  lVar10 = (long)&local_70 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lVar5 = *(long *)(lVar4 + -8);
  lVar7 = lVar10 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x24));
  local_70 = lVar4;
  __sSl8endIndex0B0QzvgTj(lVar10,uVar1,uVar2);
  __sSl5index_8offsetBy07limitedC05IndexQzSgAE_SiAEtFTj(lVar7,param_2,uVar8,lVar10,uVar1,uVar2);
  (**(code **)(lVar6 + 8))(lVar10,lVar3);
  pcVar9 = *(code **)(lVar6 + 0x30);
  lVar4 = lVar7;
  (*pcVar9)(lVar7,1,lVar3);
  if ((int)lVar4 == 1) {
    __sSl8endIndex0B0QzvgTj(local_68,uVar1,uVar2);
    lVar4 = lVar7;
    (*pcVar9)(lVar7,1,lVar3);
    if ((int)lVar4 != 1) {
      (**(code **)(lVar5 + 8))(lVar7,local_70);
    }
  }
  else {
    (**(code **)(lVar6 + 0x20))(local_68,lVar7,lVar3);
  }
  return;
}

