// rea decompile_all
// name: FUN_100420ef4
// address: 0x100420ef4
// body: available
// range: 0x100420ef4-0x100421057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100420ef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar7;
  long local_50;
  undefined1 local_48;
  
  if ((*unaff_x20 != 0) &&
     ((**(code **)(param_3 + 0x28))(*unaff_x20,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 2);
  uVar1 = *(ulong *)(unaff_x20 + 4);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar3;
      lVar6 = lVar3 >> 0x20;
      goto LAB_100420f74;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_100420f94;
  }
  else {
    if (uVar4 != 2) goto LAB_100420f94;
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar3 + 0x18);
LAB_100420f74:
    if (lVar5 == lVar6) goto LAB_100420f94;
  }
  (**(code **)(param_3 + 0x78))(lVar3,uVar1,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_100420f94:
  if (*(long *)(unaff_x20 + 6) == 0) {
    lVar3 = *(long *)(unaff_x20 + 10);
  }
  else {
    local_48 = (undefined1)unaff_x20[8];
    pcVar7 = *(code **)(param_3 + 0x80);
    local_50 = *(long *)(unaff_x20 + 6);
    FUN_10042dad0();
    (*pcVar7)(&local_50,3,&DAT_1009c0860,lVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 10);
  }
  if (((lVar3 == 0) || ((**(code **)(param_3 + 0x30))(lVar3,4,param_2,param_3), unaff_x21 == 0)) &&
     ((unaff_x20[0xc] == 0 ||
      ((**(code **)(param_3 + 0x28))(unaff_x20[0xc],5,param_2,param_3), unaff_x21 == 0)))) {
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0xe),*(undefined8 *)(unaff_x20 + 0x10),param_2
                  ,param_3);
  }
  return;
}

