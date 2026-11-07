// rea decompile_all
// name: FUN_1003d7660
// address: 0x1003d7660
// body: available
// range: 0x1003d7660-0x1003d77cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d7768) */

undefined1  [16] FUN_1003d7660(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [16];
  
  lVar7 = *unaff_x20;
  lVar3 = *(long *)(lVar7 + 0xe0);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar4,param_1,lVar1);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar3);
  if ((int)puVar2 == 1) {
    (**(code **)(lVar8 + 8))(puVar4,lVar1);
    lVar1 = 0;
    lVar8 = -0x1000000000000000;
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,lVar3);
    lVar1 = lVar5;
    lVar8 = lVar3;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj
              (lVar5,lVar3,*(undefined8 *)(lVar7 + 0xf0));
    (**(code **)(lVar6 + 8))(lVar5,lVar3);
  }
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = lVar1;
  return auVar9;
}

