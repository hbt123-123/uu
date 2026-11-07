// rea decompile_all
// name: FUN_1001297d8
// address: 0x1001297d8
// body: available
// range: 0x1001297d8-0x100129977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001297d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  puVar1 = &DAT_100a76718;
  uVar3 = 0;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = (long)puVar5 - extraout_x12;
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar2 = param_1, thunk_FUN_1001a2c34(param_1), (uVar3 & 1) == 0)) {
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,1,1,lVar4);
    FUN_100040bb4(lVar6,&DAT_100a76718,&DAT_10080ccc0);
  }
  else {
    lVar8 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    lVar10 = *(long *)(lVar4 + -8);
    pcVar7 = *(code **)(lVar10 + 0x10);
    (*pcVar7)(lVar6,lVar8 + *(long *)(lVar10 + 0x48) * lVar2,lVar4);
    pcVar9 = *(code **)(lVar10 + 0x38);
    (*pcVar9)(lVar6,0,1,lVar4);
    FUN_100040bb4(lVar6,&DAT_100a76718,&DAT_10080ccc0);
    (*pcVar7)(puVar5,param_2,lVar4);
    (*pcVar9)(puVar5,0,1,lVar4);
    FUN_10018bad8(puVar5,param_1);
    FUN_1001df654(param_1);
  }
  return;
}

