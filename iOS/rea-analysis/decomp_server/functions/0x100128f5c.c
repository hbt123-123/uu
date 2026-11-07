// rea decompile_all
// name: FUN_100128f5c
// address: 0x100128f5c
// body: available
// range: 0x100128f5c-0x100129047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100128f5c(byte *param_1,long param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  
  if ((*(byte *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::cancelled) & 1) == 0) {
    bVar3 = 0;
    if (((*(byte *)((int *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::boundTaskID) + 1)
         & 1) == 0) &&
       (*(int *)(param_2 + _TtC14UURemoteServer20DragDropPasteSession::boundTaskID) == param_3)) {
      bVar3 = 0;
      dVar4 = *(double *)(param_2 + 0x18);
      if ((-1 < *(int *)(param_2 + 0x10)) && ((ulong)ABS(dVar4) < 0x7ff0000000000000)) {
        bVar3 = 0;
        dVar5 = *(double *)(param_2 + 0x20);
        if ((ulong)ABS(dVar5) < 0x7ff0000000000000) {
          bVar1 = false;
          bVar2 = true;
          if (0.0 <= dVar4) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(dVar4)) {
              bVar1 = dVar4 == 1.0;
              bVar2 = 1.0 <= dVar4;
            }
          }
          if (((!bVar2 || bVar1) && (0.0 <= dVar5)) && (dVar5 <= 1.0)) {
            __s10Foundation4DateV1loiySbAC_ACtFZ
                      (param_4,param_2 + _TtC14UURemoteServer20DragDropPasteSession::deadline);
            bVar3 = (byte)param_4;
          }
        }
      }
    }
  }
  else {
    bVar3 = 0;
  }
  *param_1 = bVar3 & 1;
  return;
}

