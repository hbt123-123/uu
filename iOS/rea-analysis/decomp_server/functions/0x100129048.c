// rea decompile_all
// name: FUN_100129048
// address: 0x100129048
// body: available
// range: 0x100129048-0x1001291d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100129048(undefined1 *param_1,long param_2,int param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_60 [16];
  int local_50;
  
  lVar1 = _TtC14UURemoteServer20DragDropPasteSession::preparing;
  if (((((*(byte *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::cancelled) & 1) == 0) &&
       ((*(byte *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::preparing) & 1) == 0)) &&
      ((*(byte *)((int *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::boundTaskID) + 1) &
       1) == 0)) &&
     (*(int *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::boundTaskID) == param_3)) {
    dVar4 = *(double *)(param_2 + 0x18);
    if (((((-1 < *(int *)(param_2 + 0x10)) && ((ulong)ABS(dVar4) < 0x7ff0000000000000)) &&
         ((dVar5 = *(double *)(param_2 + 0x20), (ulong)ABS(dVar5) < 0x7ff0000000000000 &&
          ((0.0 <= dVar4 && (dVar4 <= 1.0)))))) && (0.0 <= dVar5)) &&
       ((dVar5 <= 1.0 &&
        (__s10Foundation4DateV1loiySbAC_ACtFZ
                   (param_4,param_2 + _TtC14UURemoteServer20DragDropPasteSession::deadline),
        (param_4 & 1) != 0)))) {
      uVar3 = 1;
      *(undefined1 *)(param_2 + lVar1) = 1;
      goto LAB_10012910c;
    }
  }
  uVar2 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
  local_50 = param_3;
  FUN_1003fb48c(FUN_10012a8dc,auStack_60,0xd0000000000000a3,0x800000010088e790,0xd00000000000001d,
                0x800000010088e840,0x3f,0);
  uVar3 = 0;
LAB_10012910c:
  *param_1 = uVar3;
  return;
}

