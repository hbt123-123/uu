// rea decompile_all
// name: FUN_100386814
// address: 0x100386814
// body: available
// range: 0x100386814-0x100386b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100386814(long param_1)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *local_60 [3];
  undefined2 local_42;
  
  FUN_100386bc8();
  if ((*(long *)(param_1 + 0xb0) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0xa8) + 4))) {
    FUN_100392bb0(*(long *)(param_1 + 0xb0),*(long *)(param_1 + 0xa8) + 0xc,0x10);
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (((*(int *)(lVar2 + 0x18) < 0) || (*(long *)(lVar2 + 0x28) == 0)) ||
     (*(long *)(lVar2 + 0x20) == 0)) {
    FUN_10038fabc(lVar2,*(undefined8 *)(param_1 + 0x78));
    lVar2 = *(long *)(param_1 + 0x80);
    if (-1 < *(int *)(lVar2 + 0x18)) goto LAB_100386888;
  }
  else {
LAB_100386888:
    if ((*(long *)(lVar2 + 0x28) != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
      local_42 = 0;
      FUN_100386dd0(param_1,(long)&local_42 + 1,&local_42);
      FUN_100386734(1,"MMKV_IO.cpp","loadFromFile",0x54,
                    "loading [%s] with %zu actual size, file size %zu, InterProcess %d, meta info version:%u"
                   );
      lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
      if ((local_42._1_1_ == '\x01') && (*(long *)(param_1 + 0x88) != 0)) {
        FUN_100386734(1,"MMKV_IO.cpp","loadFromFile",0x59,
                      "loading [%s] with crc %u sequence %u version %u");
        thunk_FUN_10037e874(local_60,lVar2 + 4,*(undefined8 *)(param_1 + 0x88),1);
        if (*(long *)(param_1 + 0xb0) == 0) {
          FUN_100380148(*(undefined8 *)(param_1 + 0x68));
        }
        else {
          FUN_100380188(*(undefined8 *)(param_1 + 0x70));
        }
        cVar1 = (char)local_42;
        lVar5 = *(long *)(param_1 + 0xb0);
        if ((char)local_42 == '\x01') {
          if (lVar5 == 0) {
            FUN_1003919bc(*(undefined8 *)(param_1 + 0x68),local_60);
          }
          else {
            FUN_100391a80(*(undefined8 *)(param_1 + 0x70),local_60,lVar5,0);
          }
        }
        else if (lVar5 == 0) {
          FUN_100391958(*(undefined8 *)(param_1 + 0x68),local_60);
        }
        else {
          FUN_100391a20(*(undefined8 *)(param_1 + 0x70),local_60,lVar5,0);
        }
        pvVar3 = operator_new(0x18);
        FUN_10037d560(pvVar3,lVar2 + 4,*(long *)(*(long *)(param_1 + 0x80) + 0x28) + -4);
        *(void **)(param_1 + 0x90) = pvVar3;
        FUN_10037dc98(pvVar3,*(undefined8 *)(param_1 + 0x88));
        if (cVar1 != '\0') {
          FUN_100386f70(param_1,0,0);
        }
        thunk_FUN_10037edac(local_60);
      }
      else {
        local_60[0] = *(undefined8 **)(param_1 + 0xd0);
        if ((local_60[0] != (undefined8 *)0x0) && (*(char *)((long)local_60[0] + 0xc) == '\x01')) {
          FUN_10037dd20(*local_60[0],*(undefined4 *)(local_60[0] + 1));
        }
        pvVar3 = operator_new(0x18);
        FUN_10037d560(pvVar3,lVar2 + 4,*(long *)(*(long *)(param_1 + 0x80) + 0x28) + -4);
        *(void **)(param_1 + 0x90) = pvVar3;
        if (*(long *)(param_1 + 0x88) == 0) {
          FUN_100387178(param_1,0,0,0,0);
        }
        else {
          FUN_100387178(param_1,0,0,0,1);
          FUN_10037ffc4(param_1,1);
        }
        FUN_100385fb0(local_60);
      }
      pcVar7 = "loaded [%s] with %zu key-values";
      uVar4 = 1;
      uVar6 = 0x85;
      goto LAB_100386b64;
    }
  }
  pcVar7 = "file [%s] not valid";
  uVar4 = 3;
  uVar6 = 0x4d;
LAB_100386b64:
  FUN_100386734(uVar4,"MMKV_IO.cpp","loadFromFile",uVar6,pcVar7);
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}

